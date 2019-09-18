/*
 *  Author: (c) Alexander Haarer 2018 License CC BY-SA
*/
#ifndef __CMD_H__
#define __CMD_H__


// ------------------------------ base classes ---------------------------

// RegisteredCmd
//   used for registration of commands
// and being able to call the CmdBase api from there
extern "C" {


	#include <string.h>
}
class RegisteredCmd {
        RegisteredCmd *chain;
    public:
        static RegisteredCmd *registry;
        RegisteredCmd() : chain(registry) {registry=this;}

        virtual void receive(char* p_buf)=0;
        virtual const char* id(void)=0;

        static void process_cmd(char* buf)
        {
            bool found=false;
            for( RegisteredCmd* p = RegisteredCmd::registry ; p!=0 ; p=p->chain)
            {
                    // find first space or end
                    char* pstr=buf;
                    int pos=0;
                    while (1)
                    {
                        if(*pstr == 0 || *pstr ==' ')
                            break;
                        pos++;
                        pstr++;
                    }
                    //printf("check <%s>:<%s>\n",buf,p->id());
                    if ((buf[0] != 0) && 
					    (strncmp(buf, p->id() ,pos) == 0) )
                    {
                        //printf("match :%s\n",p->id());
                        p->receive(buf );
                        found=true;
                        break;
                    }
            }
            if ( ! found)
            {
                printf("commands :\n");
                for( RegisteredCmd* p = RegisteredCmd::registry ; p!=0 ; p=p->chain)
                    printf(" %s\n",p->id());
            }
        }
};


// base and specific commands implemented
// with the curiously recurring template pattern
// the specific command must
//   - implement the parse  method used in the template.
//   - implement an id method

template<typename T>
class CmdBase: public RegisteredCmd
{
	void (* m_fu) (T*);

public:
	CmdBase( void (* _fu) (T*) ):m_fu(_fu){}

	void receive(char* p_buf)
	{
		if ( ((T*)this)->parse(p_buf) )
            m_fu( (T*)this );
        else
            usage();

	}
    void usage()
    {
        printf (" usage: %s\n",id() );
    }
};


// Line Editing Buffer Class
// parameters are a send function and the buffer size
// input_char() must be called with every received char
// it returns true when a string is complete
// the string is in member b
typedef void(*send_func_signature)(char); // signature for all valid template params
template<send_func_signature send,int LE_BUFFER_SIZE>
class LEBuffer {

// adapter function to uart library

	char *cp, *cp2;


public:
	char b[LE_BUFFER_SIZE];

	LEBuffer(void) {
		cp = b;
	}
	bool input_char(char c) {

		// if \r or \n ->  finish
		if (c == '\r')
			c = '\n';
		if (c == '\n') {
			*cp++ = 0;
			send(c);
			//rxp = b;
			cp =b;
			return true;
		} else if (c == '\t')
			c = ' ';

		// normal characters
		if ((c >= (uint8_t) ' ' && c <= (uint8_t) '\x7e')
				|| c >= (uint8_t) '\xa0') {
			if (cp == b + LE_BUFFER_SIZE - 1)
				send('\a');
			else {
				*cp++ = c;
				send(c);
			}
			return false;
		}

		switch (c) {
		case 'c' & 0x1f:
			return true; // this should be eof

		case '\b':
		case '\x7f':
			if (cp > b) {
				send('\b');
				send(' ');
				send('\b');
				cp--;
			}
			break;

		case 'r' & 0x1f:
			send('\r');
			for (cp2 = b; cp2 < cp; cp2++)
				send(*cp2);
			break;

		case 'u' & 0x1f:
			while (cp > b) {
				send('\b');
				send(' ');
				send('\b');
				cp--;
			}
			break;

		case 'w' & 0x1f:
			while (cp > b && cp[-1] != ' ') {
				send('\b');
				send(' ');
				send('\b');
				cp--;
			}
			break;
		}
		return false;
	}

};


/*
// ------------------------------------ application  command classes -------------------

class SpecificCmd:public CmdBase< SpecificCmd >
{

public:
	uint32_t m_field_1;
	uint32_t m_field_2;

	SpecificCmd( void (* _cb) (SpecificCmd*)):CmdBase< SpecificCmd >(_cb){}

	bool parse(char* p_buffer){ return sscanf( p_buffer, "%*s %lx %lx", &m_field_1, &m_field_2 ) == 2;  }

	const char* id(void){ return "cmd1 <X32> <X32>"; }
};

class OtherSpecificCmd:public CmdBase< OtherSpecificCmd >
{
public:
	uint16_t m_other_field_1;
	uint16_t m_other_field_2;

	OtherSpecificCmd( void (* _cb) (OtherSpecificCmd*)):CmdBase< OtherSpecificCmd >(_cb){}

	bool parse(char* p_buffer) { return sscanf( p_buffer, "%*s %x %x", &m_other_field_1, &m_other_field_2 ) == 2;  }

	const char* id(void){ return "othercmd <X8> <X8>";}
};

//---------------------------------------- instanciation of commands ------------------------------


// a callback is specified using a lambda function
SpecificCmd my_cmd0( [] (SpecificCmd* m) {
	printf("SpecificCmd %08lx %08lx\n", m->m_field_1, m->m_field_2);
	ssd1306_menuDown(&menu);
	ssd1306_updateMenu(&menu);
} );
OtherSpecificCmd my_cmd1( [] (OtherSpecificCmd* m) {
	printf("OtherSpecificCmd %02x %02x\n", m->m_other_field_1, m->m_other_field_2);
	ssd1306_menuUp(&menu);
	ssd1306_updateMenu(&menu);
} );


//initialize command registry
RegisteredCmd* RegisteredCmd::registry = 0;

void my_send(char c)
{
	my_uart.send((uint8_t*)&c,1);
}

LEBuffer<my_send> leb;

//  in main loop (or where input is handled)

		//we cant use fgets here, because it waits
		c=getc(stdin);
		if (EOF  != c)
		{
			if (true ==leb.input_char(c) )
			{
	            RegisteredCmd::process_cmd(leb.b);
			}
		}


*/
#endif //__CMD_H__

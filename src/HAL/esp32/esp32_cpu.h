//just a dummy for now
namespace UHAL
{
template<>class CPU<ARCH_ESP32,class cpu>
{
    public:
        long ClockMhz;
        void SetClock(long){};
};
}
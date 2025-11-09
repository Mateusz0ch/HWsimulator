#include <cstdint>
#include <iostream>

template<typename T>
class Memory{
        T* blocks;
    public:
        Memory(uint32_t _size);
        ~Memory();
}
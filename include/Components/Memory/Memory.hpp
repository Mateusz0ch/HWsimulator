#include <cstdint>
#include <iostream>

namespace component{
    namespace memory{
        template<typename T>
        class Memory{
                T* blocks;
            public:
                Memory(uint32_t _size);
                ~Memory();
        };
    }
}
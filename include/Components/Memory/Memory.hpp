#include <cstdint>
#include <iostream>

namespace component{
    namespace memory{
        template<typename T>
        class Memory{
                const uint32_t memory_size;
                T* blocks;
            public:
                Memory(uint32_t _size);
                ~Memory();
                uint32_t getSize() const;
        };
    }
}
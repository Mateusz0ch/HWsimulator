#include <cstdint>
#include <iostream>

namespace component{
    namespace memory{
        enum class MemoryType : uint8_t{
            NONE,
            RAM,
            FLASH
        };

        template<typename T>
        class Memory{
                MemoryType m;
                const uint32_t memory_size;
                T* blocks;
            public:
                Memory(MemoryType,uint32_t);
                ~Memory();
                uint32_t getSize() const;
                void initalInfo();
                std::string memoryTypeToString(MemoryType&);
        };
    }
}
#include <iostream>
#include <string>
#include <functional>

#include "Base.hpp"
#include "Memory.hpp"

int main(){
    using component::memory::MemoryType;

    MemoryType m = MemoryType::RAM;

    component::memory::Memory<uint64_t> memory{m,8};

};
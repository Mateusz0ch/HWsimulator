#include <iostream>
#include <string>
#include <functional>

#include "Base.hpp"
#include "Memory.hpp"

int main(){
    component::memory::Memory<uint64_t>memory{8};
};
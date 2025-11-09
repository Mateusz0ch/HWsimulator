#include "Memory.hpp"

using namespace component::memory;

template<typename T>
Memory<T>::Memory(uint32_t _size){
    blocks = new T[_size];
    std::cout<<"Allocated memory with "<<_size<<" size"<<std::endl;
};

template<typename T>
Memory<T>::~Memory(){
    delete[] blocks;
    std::cout<<"Memory freed with "<<sizeof(blocks)/sizeof(T)<<std::endl;
};

template class Memory<uint64_t>;
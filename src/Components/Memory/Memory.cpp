#include "Memory.hpp"

using namespace component::memory;

template<typename T>
Memory<T>::Memory(MemoryType _m,uint32_t _size):memory_size(_size){
    m = _m;
    blocks = new T[_size];
    initalInfo();
};

template<typename T>
Memory<T>::~Memory(){
    delete[] blocks;
};

template<typename T>
uint32_t Memory<T>::getSize() const {
    return memory_size;
};

template<typename T>
void Memory<T>::initalInfo(){
    std::cout<<"New block of memory was added to system"<<std::endl;
    std::cout<<"Memory type: "<< memoryTypeToString(m)<<std::endl; 
    std::cout<<"Memory size: "<<getSize()<<std::endl;
};

template<typename T>
std::string Memory<T>::memoryTypeToString(MemoryType& mt){
    switch(mt){
        case MemoryType::RAM:
            return "RAM";
        case MemoryType::FLASH:
            return "FLASH";
    };
    return "";
}

template class Memory<uint64_t>;
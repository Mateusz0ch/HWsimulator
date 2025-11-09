project(HWsimulator)

set(CMAKE_MINIMUM_REQUIRED_VERSION 3.28.0)
set(CMAKE_CXX_STANDARD 17)


set(src 
        main.cpp 
        src/Base.cpp 
        src/Components/Memory/Memory.cpp)
set(inc 
        include/ 
        include/Components/Memory)

add_executable(main ${src})

target_include_directories(main PUBLIC ${CMAKE_SOURCE_DIR}/include/ ${CMAKE_SOURCE_DIR}/include/Components/Memory)

set(src main.cpp src/Base.cpp)

add_executable(main ${src})

target_include_directories(main PUBLIC
            inc/)
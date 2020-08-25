target_sources(singletonLib PUBLIC singleton.cpp)

add_executable(singletonMain main.cpp)

target_link_libraries(singletonMain singletonLib)

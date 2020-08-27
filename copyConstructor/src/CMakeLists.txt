target_sources(ctorLib PUBLIC cow.cpp farm.cpp)

add_executable(cpyCtorMain main.cpp)

target_link_libraries(cpyCtorMain ctorLib)
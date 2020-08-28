target_sources(pimplLib PUBLIC pimpl.cpp)

add_executable(pimplMain main.cpp)

target_link_libraries(pimplMain pimplLib)
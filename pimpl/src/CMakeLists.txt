target_sources(pimplLib PUBLIC car.cpp carProxy_Pimpl.cpp)

add_executable(pimplMain main.cpp)

target_link_libraries(pimplMain pimplLib)

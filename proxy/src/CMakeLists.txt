target_sources(proxyLib PUBLIC carProxy.cpp car.cpp)

add_executable(proxyMain main.cpp)

target_link_libraries(proxyMain proxyLib)
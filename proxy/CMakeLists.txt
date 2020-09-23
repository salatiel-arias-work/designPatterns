add_library(proxyLib STATIC src/carProxy.cpp src/car.cpp)

target_include_directories(proxyLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_executable(proxyMain src/main.cpp)

target_link_libraries(proxyMain proxyLib)

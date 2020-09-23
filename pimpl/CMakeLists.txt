add_library(pimplLib STATIC	src/car.cpp
				src/carProxy_Pimpl.cpp)

target_include_directories(pimplLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_executable(pimplMain src/main.cpp)

target_link_libraries(pimplMain pimplLib)

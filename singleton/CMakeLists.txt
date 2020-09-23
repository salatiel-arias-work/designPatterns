add_library(singletonLib STATIC src/singleton.cpp)

target_include_directories(singletonLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_executable(singletonMain src/main.cpp)

target_link_libraries(singletonMain singletonLib)

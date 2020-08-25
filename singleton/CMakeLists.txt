add_library(singletonLib STATIC)

target_include_directories(singletonLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_subdirectory(src)

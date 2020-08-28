add_library(pimplLib STATIC)

target_include_directories(pimplLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_subdirectory(src)
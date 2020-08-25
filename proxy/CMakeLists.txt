add_library(proxyLib STATIC)

target_include_directories(proxyLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)

add_subdirectory(src)

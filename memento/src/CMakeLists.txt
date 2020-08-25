#adds the source files that the mementoLib library should be composed of
target_sources(mementoLib PUBLIC car.cpp memento.cpp careTaker.cpp)

#creates an executable target called "mementoMain"
add_executable(mementoMain main.cpp)

#links mementoMain executable against mementoLib library
target_link_libraries(mementoMain mementoLib)
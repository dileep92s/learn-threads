cmake_minimum_required (VERSION 3.10)

project ( threads )

include_directories(inc)
link_libraries(pthread)

file( GLOB SRCFILES "src/*.cpp")

add_executable( ${PROJECT_NAME} ${SRCFILES})
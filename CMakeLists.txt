cmake_minimum_required (VERSION 3.10)

project ( threads )

link_libraries(pthread)

add_executable( ${PROJECT_NAME} Main.cpp ThreadA.cpp ThreadB.cpp)
cmake_minimum_required(VERSION 3.12)
project(ProjectOnCMake)

set(CMAKE_CXX_STANDARD 14)

include_directories ("${PROJECT_BINARY_DIR}")

include_directories ("${PROJECT_SOURCE_DIR}/lib")
add_subdirectory(lib)
set (EXTRA_LIBS ${EXTRA_LIBS} lib)

add_executable(ProjectOnCMake main.cpp)

target_link_libraries(ProjectOnCMake ${EXTRA_LIBS})
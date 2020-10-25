cmake_minimum_required(VERSION 3.17)
project(Start)

set(CMAKE_CXX_STANDARD 14)

file(GLOB native_srcs "./src/*.cpp")
include_directories(C:/Users/stupi/Documents/libgit2/include
        ./include
        )
link_directories(
        C:/Users/stupi/Documents/libgit2/build/Release
)

add_executable(${PROJECT_NAME} main.cpp
        ${native_srcs}
        )

target_link_libraries(
        ${PROJECT_NAME}
        git2
)
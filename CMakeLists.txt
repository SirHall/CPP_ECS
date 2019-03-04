
cmake_minimum_required(VERSION 3.5)

add_compile_options(-Wall -Wextra -Wpedantic -Wno-unknown-pragmas -Wno-unused-parameter -Iinclude) 

project(ecs)

set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include/)
#[[add_library(MY_LIB ${INCLUDE_DIR})]]

#[[link_directories(ecs include)]]

#[[add_subdirectory(include)]]

set(EXECUTABLE_NAME "ecs")
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

file(GLOB_RECURSE ecs_SRCS
    #[["*.hpp"]]
    "src/*.cpp"
    RELATIVE_PATH
)

add_executable(ecs ${ecs_SRCS})

#[[include_directories(${INCLUDE_DIR})]]

target_include_directories(ecs PUBLIC ${INCLUDE_DIR})

#[[link_directories(${INCLUDE_DIR})]]

#[[target_include_directories(ecs PUBLIC ${INCLUDE_DIR})]]

#[[target_link_libraries(ecs include)]]

#[[SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} ${GCC_COVERAGE_LINK_FLAGS} -Iinclude")]]
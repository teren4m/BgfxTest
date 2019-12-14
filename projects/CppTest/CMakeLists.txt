cmake_minimum_required(VERSION 3.12)

# set the project name
project(CppTest VERSION 0.1)

add_executable(
    ${PROJECT_NAME}
    src/main.cpp
    src/testCPP11.cpp
    src/testRx.cpp
    )

target_include_directories(${PROJECT_NAME}
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)

target_compile_features(
    ${PROJECT_NAME} PUBLIC 
    cxx_std_20
    )

target_link_libraries(${PROJECT_NAME}
    libs
)
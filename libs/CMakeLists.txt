cmake_minimum_required(VERSION 3.12)

project(libs)

add_library(${PROJECT_NAME} INTERFACE)

target_include_directories(${PROJECT_NAME}
    INTERFACE
        ${PROJECT_SOURCE_DIR}/rxcpp/Rx/v2/src/
)
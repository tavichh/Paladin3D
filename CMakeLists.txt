cmake_minimum_required(VERSION 3.29)
project(Paladin3D)
find_package(Vulkan REQUIRED)
find_package(VulkanHeaders CONFIG)


set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(${PROJECT_NAME})
set_target_properties(${PROJECT_NAME} PROPERTIES LINKER_LANGUAGE CXX)

target_sources(${PROJECT_NAME}
        PRIVATE
        src/main.cpp
        src/graphics/instance.cpp
        PRIVATE FILE_SET CXX_MODULES FILES
        src/graphics/graphics.ixx
)
target_link_libraries(${PROJECT_NAME} PRIVATE Vulkan::Vulkan Vulkan::Headers stdc++)

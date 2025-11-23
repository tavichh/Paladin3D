cmake_minimum_required(VERSION 3.29)
project(Paladin3D)
find_package(Vulkan REQUIRED)
find_package(VulkanHeaders CONFIG)


set(CMAKE_CXX_STANDARD 23)

add_executable(${PROJECT_NAME} main.cpp
        src/vk/base.cpp
        src/vk/base.h)
target_link_libraries(${PROJECT_NAME} PRIVATE Vulkan::Headers)

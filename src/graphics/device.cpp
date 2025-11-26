module;
#include <iostream>
#include <ostream>
#include <vulkan/vulkan_raii.hpp>
#include "utils.hpp"
namespace graphics {
    void vk_enumerateDevices( ) {
        try {
            vk::raii::Context context;
            vk::raii::Instance instance = vk::raii::su::makeInstance(context, AppName, EngineName);
        } catch (std::exception &e) {
            std::cout << "std::exception:" << e.what() << std::endl;
        }
    }
}

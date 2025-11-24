module;
#include <cstdlib>
#include <iostream>
#include <vulkan/vulkan.hpp>
export module instance;
namespace graphics {
    export void vk_createInstance( );
} // namespace graphics
namespace graphics {
    export auto appName = "Paladin3D";
    export auto engineName = "Paladin3D";
    void vk_createInstance( ) {
        try {
            const vk::ApplicationInfo appInfo(appName, 1, engineName, 1, VK_API_VERSION_1_3);
            const vk::InstanceCreateInfo instance_create_info({}, &appInfo);
            const vk::Instance instance = vk::createInstance(instance_create_info);
            instance.destroy();
        } catch (vk::SystemError &err) {
            std::cout << "vk::SystemError:" << err.what() << "\n";
            exit(-1);
        } catch (std::exception &err) {
            std::cout << "std::exception:" << err.what() << "\n";
            exit(-1);
        } catch (...) {
            std::cout << "unknown exception\n";
        }
    }
} // namespace graphics

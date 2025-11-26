#include <iostream>
import graphics;
int main( ) {
    graphics::vk_createInstance();
    graphics::vk_enumerateDevices();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

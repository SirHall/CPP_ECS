#include "Component.hpp"
#include <iostream>

Component::Component() {
    std::cout << "Instantiated new component instance!\n";
}

Component::~Component() {
    std::cout << "Destroyed component instance!\n";
}
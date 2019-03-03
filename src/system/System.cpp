#include "System.hpp"

System::System(){
    //Instantiate component group in child classes     
}

System::~System(){
    componentGroup.release();
}

std::vector<std::size_t> System::GetCompHashes(){
    return componentGroup->GetCompHashes();
}

void System::Tick(std::vector<std::vector<Component>> comps, unsigned int i){
    
}
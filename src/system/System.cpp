#include "System.hpp"
#include "CompGroup.hpp"

System::System(){
    //Instantiate component group in child classes     
}

System::~System(){
    // componentGroup.release();
}

std::vector<std::size_t> System::GetCompHashes(){
    return componentGroup->GetCompHashes();
}

void System::Tick(
    std::vector<std::map<std::size_t, std::shared_ptr<Component>>> comps, 
    unsigned int i, 
    double deltaTime){

        
}
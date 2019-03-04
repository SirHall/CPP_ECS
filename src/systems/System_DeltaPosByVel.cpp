#include "System_DeltaPosByVel.hpp"

System_DeltaPosByVel::System_DeltaPosByVel() : System(){
    *componentGroup = CompGroup({
        typeid(Component_Position).hash_code(),
        typeid(Component_Velocity).hash_code(),
    });
}

System_DeltaPosByVel::~System_DeltaPosByVel(){

}

void System_DeltaPosByVel::Tick(
    std::vector<std::map<std::size_t, 
        std::shared_ptr<Component>>> comps, 
    unsigned int i, 
    double deltaTime){

    auto position_comp = GetCompAs(comps, i, Component_Position);
    auto velocity_comp = GetCompAs(comps, i, Component_Velocity);

    position_comp->position = 
        position_comp->position + 
        (velocity_comp->velocity * deltaTime);
}

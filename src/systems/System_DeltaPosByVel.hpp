#ifndef System_DeltaPosByVel_hpp
#define System_DeltaPosByVel_hpp

#include "../system/System.hpp"
#include "../system/CompGroup.hpp"
#include "../components/Component_Position.hpp"
#include "../components/Component_Velocity.hpp"
#include <typeinfo>

class System_DeltaPosByVel : public System{

    public:
        System_DeltaPosByVel() : System(){
            *componentGroup = CompGroup({
                typeid(Component_Position).hash_code(),
                typeid(Component_Velocity).hash_code(),
            });
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
};

#endif
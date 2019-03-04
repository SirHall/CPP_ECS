#ifndef System_DeltaPosByVel_hpp
#define System_DeltaPosByVel_hpp

#include "System.hpp"
#include "CompGroup.hpp"
#include "Component_Position.hpp"
#include "Component_Velocity.hpp"
#include <typeinfo>

class System_DeltaPosByVel : public System{

    public:
        System_DeltaPosByVel();

        ~System_DeltaPosByVel();

        void Tick(
            std::vector<std::map<std::size_t, 
                std::shared_ptr<Component>>> comps, 
            unsigned int i, 
            double deltaTime);
};

#endif
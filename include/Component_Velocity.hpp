#ifndef Component_Velocity_hpp
#define Component_Velocity_hpp

#include "Component.hpp"
#include "Vec3.hpp"

class Component_Velocity : public Component{
    private:

    public:
        Component_Velocity();

        Component_Velocity(double x = 0.0, double y = 0.0, double z = 0.0);

        Component_Velocity(Vec3 pos);

        ~Component_Velocity();
        
        Vec3 velocity;
};

#endif
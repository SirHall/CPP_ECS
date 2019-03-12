#ifndef Component_Velocity_hpp
#define Component_Velocity_hpp

#include "Component.hpp"
#include "Vec3.hpp"

class Component_Velocity : public Component{
    private:

    public:
        Component_Velocity();

        Component_Velocity(double x, double y, double z);

        Component_Velocity(Vec3 pos);

        ~Component_Velocity();
        
        Vec3 velocity;
};

#endif
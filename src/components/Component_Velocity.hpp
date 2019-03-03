#ifndef Component_Velocity_hpp
#define Component_Velocity_hpp

#include "../component/Component.hpp"
#include "../math/Vec3.hpp"

class Component_Velocity : public Component{
    private:

    public:
        Component_Velocity(double x = 0.0, double y = 0.0, double z = 0.0){
            velocity.x = x;
            velocity.y = y;
            velocity.z = z;
        }

        Component_Velocity(Vec3 pos){
            velocity = pos;
        }

        ~Component_Velocity(){
            velocity.~Vec3();
        }
        
        Vec3 velocity;
};

#endif
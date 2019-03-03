#ifndef Component_Position_hpp
#define Component_Position_hpp

#include "../component/Component.hpp"
#include "../math/Vec3.hpp"

class Component_Position : public Component{
    private:

    public:
        Component_Position(double x = 0.0, double y = 0.0, double z = 0.0){
            position.x = x;
            position.y = y;
            position.z = z;
        }

        Component_Position(Vec3 pos){
            position = pos;
        }

        ~Component_Position(){
            position.~Vec3();
        }
        
        Vec3 position;
};

#endif
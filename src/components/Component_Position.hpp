#ifndef Component_Position_hpp
#define Component_Position_hpp

#include "../component/Component.hpp"
#include "../math/Vec3.hpp"

class Component_Position : public Component{
    private:

    public:
        Component_Position(double x = 0.0, double y = 0.0, double = 0.0){
            
        }

        ~Component_Position(){
            
        }
        
        Vec3 position;
};

#endif
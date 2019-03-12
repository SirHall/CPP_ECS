#ifndef Component_Position_hpp
#define Component_Position_hpp

#include "Component.hpp"
#include "Vec3.hpp"

class Component_Position : public Component{
    private:

    public:

        Component_Position();

        Component_Position(double x, double y, double z);

        Component_Position(Vec3 pos);

        virtual ~Component_Position();
        
        Vec3 position;
};

#endif
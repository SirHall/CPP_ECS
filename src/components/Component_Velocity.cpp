#include "Component_Velocity.hpp"

Component_Velocity::Component_Velocity(){
    velocity.x = 0.0;
    velocity.y = 0.0;
    velocity.z = 0.0;
}

Component_Velocity::Component_Velocity(
    double x, double y, double z){
    
    velocity.x = x;
    velocity.y = y;
    velocity.z = z;
}

Component_Velocity::Component_Velocity(Vec3 pos){
    velocity = pos;
}

Component_Velocity::~Component_Velocity(){
    velocity.~Vec3();
}
        
#include "Component_Position.hpp"

Component_Position::Component_Position(){
    position.x = 0.0;
    position.y = 0.0;
    position.z = 0.0;
}

Component_Position::Component_Position(
    double x , double y , double z ){
    
    position.x = x;
    position.y = y;
    position.z = z;
}

Component_Position::Component_Position(Vec3 pos){
    position = pos;
}

Component_Position::~Component_Position(){
    position.~Vec3();
}
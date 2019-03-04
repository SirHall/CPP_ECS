#include "Vec3.hpp"

Vec3::Vec3(){
    x = y = z = 0.0;
}

Vec3::Vec3(double x, double y, double z){
    x = y = z = 0.0;
}

Vec3::~Vec3(){}

double Vec3::Magnitude(){return std::sqrt(x*x + y*y + z*z);}

Vec3 Vec3::Normalized(){return Vec3(x, y, z) / Magnitude();}

Vec3 Vec3::Translate(Vec3 dir, double distance){
    return Vec3(x, y, z) + (dir * distance);
}

Vec3 Vec3::Translate(Vec3 translate){
    return Vec3(x, y, z) + translate;
}

Vec3 Vec3::WithMagnitude(double magnitude){
    return this->Normalized() * magnitude;
}

Vec3 Vec3::WithDirection(Vec3 direction){
    return direction.Normalized() * this->Magnitude();
}


#pragma region Operator Overloads

Vec3 Vec3::operator +(Vec3 v){return Vec3(x + v.x, y + v.y, z + v.z);}

// Vec3 operator +=(Vec3 v){return Vec3(x + v.x, y + v.y, z + v.z);}

Vec3 Vec3::operator -(Vec3 v){return Vec3(x - v.x, y - v.y, z - v.z);}

Vec3 Vec3::operator *(double v){return Vec3(x * v, y * v, z * v);}

Vec3 Vec3::operator /(double v){return Vec3(x / v, y / v, z / v);}

#pragma endregion

#ifndef Vec3_hpp
#define Vec3_hpp

#include <cmath>

struct Vec3{

    public:
        Vec3(double x = 0.0, double y = 0.0, double z = 0.0){
            this->x = x;
            this->y = y;
            this->z = z;
        }
        ~Vec3(){}

        double x, y, z;

        double Magnitude(){return std::sqrt(x*x + y*y + z*z);}

        Vec3 Normalized(){return Vec3();}

        Vec3 Translate(Vec3 dir, double distance){
            return Vec3(x, y, z) + (dir * distance);
        }

        Vec3 Translate(Vec3 translate){
            return Vec3(x, y, z) + translate;
        }

        Vec3 WithMagnitude(double magnitude){
            return this->Normalized() * magnitude;
        }

        Vec3 WithDirection(Vec3 direction){
            return direction.Normalized() * this->Magnitude();
        }

        #pragma region Operator Overloads

        Vec3 operator +(Vec3 v){return Vec3(x + v.x, y + v.y, z + v.z);}

        Vec3 operator -(Vec3 v){return Vec3(x - v.x, y - v.y, z - v.z);}

        Vec3 operator *(double v){return Vec3(x * v, y * v, z * v);}

        Vec3 operator /(double v){return Vec3(x / v, y / v, z / v);}

        #pragma endregion

};

#endif
#ifndef Vec3_hpp
#define Vec3_hpp

#include <cmath>

struct Vec3{

    public:
        Vec3();

        Vec3(double x, double y, double z);
        
        ~Vec3();

        double x, y, z;

        double Magnitude();

        Vec3 Normalized();

        Vec3 Translate(Vec3 dir, double distance);

        Vec3 Translate(Vec3 translate);

        Vec3 WithMagnitude(double magnitude);

        Vec3 WithDirection(Vec3 direction);

        #pragma region Operator Overloads

        Vec3 operator +(Vec3 v);

        // Vec3 operator +=(Vec3 v){return Vec3(x + v.x, y + v.y, z + v.z);}

        Vec3 operator -(Vec3 v);

        Vec3 operator *(double v);

        Vec3 operator /(double v);

        #pragma endregion

};

#endif
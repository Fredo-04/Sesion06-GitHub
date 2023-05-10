#include <iostream>
#include <string>
using namespace std;
class Vector{
    public:
        Vector(double _x, double _y): x(_x),y(_y){}
        float x,y;
        float getX(){
            return x;
        }
        float getY(){
            return y;
        }
};
Vector & operator + (const Vector &v1, const Vector &v2){
    return *( new Vector(v1.x+v2.x,v1.y+v2.y));
}
Vector & operator - (const Vector &v1, const Vector &v2){
    return *( new Vector(v1.x-v2.x,v1.y-v2.y));
}
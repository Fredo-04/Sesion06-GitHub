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

int main() {
    Vector v1(1, 2);
    Vector v2(3, 4);
    
    Vector suma = v1 + v2;
    Vector resta = v1 - v2;
    
    cout << "Vector suma: (" << suma.getX() << ", " << suma.getY() << ")" << endl;
    cout << "Vector resta: (" << resta.getX() << ", " << resta.getY() << ")" << endl;
    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
class Circulo{
    private:
        float radio;
        float diametro;
    public:
        Circulo(const float radio){
            this->radio=radio;
            this->diametro=radio*2;
        }
        friend double calcularArea(Circulo &);
        float getRadio(){
            return radio;
        }
        float getDiametro(){
            return diametro;
        }
};
double calcularArea(Circulo &r){
    double radio=r.getRadio();
    double area=radio*radio;
    return area;
}
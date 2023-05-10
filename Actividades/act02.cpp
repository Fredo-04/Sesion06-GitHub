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

int main() {
    float radio;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    Circulo circ(radio);

    cout << "El diámetro del círculo es: " << circ.getDiametro() << endl;
    cout << "El área del círculo es: " << calcularArea(circ) << endl;

    return 0;
}
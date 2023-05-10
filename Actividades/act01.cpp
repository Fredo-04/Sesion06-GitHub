#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Estudiante{
    private:
        string nombre;
        int edad;
        int codigo;
        float nota;
    public:
        Estudiante(){};
        Estudiante(const string nombre, const int edad, const int codigo, const float nota){
            this->nombre=nombre;
            this->edad=edad;
            this->codigo=codigo;
            this->nota=nota;
        }
        string getNombre(){ 
            return nombre; 
        }
        int getEdad(){ 
            return edad; 
        }
        int getCodigo(){ 
            return codigo; 
        }
        float getNota(){ 
            return nota; 
        }
        void imprimir(){
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Codigo: " << codigo << endl;
        cout << "Nota: " << nota << endl;
        cout << endl;
    }
};
int main(){
    const int nummax = 100;
    vector<Estudiante> VectorEstudiantes;
    Estudiante ArrayEstudiantes[nummax];
    int contadorarray = 0;
    Estudiante est1("Juan Perez", 18, 1001, 18.5);
    VectorEstudiantes.push_back(est1);
    ArrayEstudiantes[contadorarray]=est1;
    contadorarray++;
    Estudiante est2("Maria Lopez", 20, 1002, 17.0);
    VectorEstudiantes.push_back(est2);
    ArrayEstudiantes[contadorarray]=est2;
    contadorarray++;
    Estudiante est3("Pedro Garcia", 19, 1003, 16.5);
    VectorEstudiantes.push_back(est3);
    ArrayEstudiantes[contadorarray]=est3;
    contadorarray++;
    Estudiante est4("Ana Martinez", 21, 1004, 19.0);
    VectorEstudiantes.push_back(est4);
    ArrayEstudiantes[contadorarray]=est4;
    contadorarray++;
    for (int i = 0; i < VectorEstudiantes.size(); i++){
        if (VectorEstudiantes[i].getNota() >= 18){
            VectorEstudiantes[i].imprimir();
            }
    }
    cout<<"--------------\n";
    for (int i = 0; i < VectorEstudiantes.size() - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < VectorEstudiantes.size(); j++) {
            if (VectorEstudiantes[j].getNota() < VectorEstudiantes[min_idx].getNota()) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            swap(VectorEstudiantes[i], VectorEstudiantes[min_idx]);
        }
    }
    for (int i = 0; i < VectorEstudiantes.size(); i++){
        VectorEstudiantes[i].imprimir();    
    }
    

    return 0;
}

#ifndef ejercicio_h
#define ejercicio_h
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//01
class Alumno{
    private:
        string nombre;
        int edad;
        float promedio;
    public:
        //03
        Alumno(const string _n, const int _e, const float _p):nombre(_n),edad(_e),promedio(_p){}
        string obtenerdatos(){
            return "nombre: "+nombre+" edad: "+to_string(edad)+" promedio: "+to_string(promedio);
        }
        bool operator<(const Alumno& otro){
        return promedio < otro.promedio;
        }
        string getNombre(){
            return nombre;
        }
        int getEdad(){
            return edad;
        }
        float getPromedio(){
            return promedio;
        }
};
//02
class Grupo{
    public:
        vector<Alumno> VectorEstudiantes;
        int cantidad;
    //04
    Grupo(const int cantidad){
        this->cantidad=cantidad;
    }
        /*string obtenerdatos(){
            return ""
        }*/
        void agregarAlumno(string nom, int ed, float prom){
            if(VectorEstudiantes.size()<cantidad){
                VectorEstudiantes.push_back(Alumno(nom,ed,prom));
            }
            else{
                cout<<"grupo lleno\n";
            }
        }
        void ordenarEstudiantes(){
            for (int i = 0; i < VectorEstudiantes.size() - 1; i++) {
                int cambio = i;
                for (int j = i + 1; j < VectorEstudiantes.size(); j++) {
                    if (VectorEstudiantes[j].getPromedio() < VectorEstudiantes[cambio].getPromedio()) {
                        cambio = j;
                    }
            }
            if (cambio != i) {
                swap(VectorEstudiantes[i], VectorEstudiantes[cambio]);
                }
            }
        }
        float promedioGrupal(){
            float promgrup;
            for (int i=0; i<VectorEstudiantes.size()-1;i++){
                promgrup=promgrup+VectorEstudiantes[i].getPromedio();
            }
            return promgrup;
        }
        Alumno mejorPromedio(){
            int mejor=0;
            for (int i = 0; i < VectorEstudiantes.size()-1; i++)
            {
                if(VectorEstudiantes[i].getPromedio()>VectorEstudiantes[mejor].getPromedio()){
                    mejor=i;
                }
            }
            return VectorEstudiantes[mejor];
        }
};

#endif
#ifndef ejercicio_h
#define ejercicio_h
#include <iostream>
#include <string>
#include <vector>
//se declaran las librerias necesarias
using namespace std;
//01
class Alumno{ //creacion de la clase alumno
    private: //atributos publicos
        string nombre;
        int edad;
        float promedio;
    public:
        //03
        Alumno(const string _n, const int _e, const float _p):nombre(_n),edad(_e),promedio(_p){}//constructor
        string obtenerdatos(){
            return "nombre: "+nombre+" edad: "+to_string(edad)+" promedio: "+to_string(promedio);
        }//desarrollo del punto b del segundo ejercicio
        bool operator<(const Alumno& otro){
        return promedio < otro.promedio;
        }//desarrollo del punto c del segundo ejercicio
        //setter y getters de los atributos privados para su utilizacion en la siguiente clase
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
class Grupo{ //creacion de la segunda clase
    public:
        //creacion de atributos
        vector<Alumno> VectorEstudiantes;
        int cantidad;
    //04
    Grupo(const int cantidad){ //constructor
        this->cantidad=cantidad;
    }
        /*string obtenerdatos(){
            return ""
        }*/
        void agregarAlumno(string nom, int ed, float prom){ //desarrollo del punto c del cuarto ejercicio
            if(VectorEstudiantes.size()<cantidad){
                VectorEstudiantes.push_back(Alumno(nom,ed,prom));
            }
            else{
                cout<<"grupo lleno\n";
            }
        }
        void ordenarEstudiantes(){ //desarrollo del punto d del cuarto ejercicio
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
        float promedioGrupal(){ //desarrollo del punto e del cuarto ejercicio
            float promgrup; //variable que acumulara la suma de los promedios
            for (int i=0; i<VectorEstudiantes.size()-1;i++){
                promgrup=promgrup+VectorEstudiantes[i].getPromedio();
            }
            return promgrup/VectorEstudiantes.size();
        }
        Alumno mejorPromedio(){ //desarrollo del punto f del cuarto ejercicio
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
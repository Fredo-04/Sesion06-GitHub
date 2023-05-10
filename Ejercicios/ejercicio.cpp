#include "ejercicio_h.h"

int main(){
    Grupo grupo(5);

    grupo.agregarAlumno("Juan", 20, 18.7);
    grupo.agregarAlumno("Maria", 19, 19.5);
    grupo.agregarAlumno("Pedro", 22, 17.3);
    grupo.agregarAlumno("Laura", 21, 16.5);
    grupo.agregarAlumno("Carlos", 20, 18.0);

    cout<<"Estudiantes antes de ordenar por promedio: "<<endl;
    for(int i=0;i<grupo.VectorEstudiantes.size();i++){
        cout<<grupo.VectorEstudiantes[i].obtenerdatos()<<endl;
    }

    grupo.ordenarEstudiantes();

    cout<<"Estudiantes despues de ordenar por promedio: "<<endl;
    for(int i=0;i<grupo.VectorEstudiantes.size();i++){
        cout<<grupo.VectorEstudiantes[i].obtenerdatos()<<endl;
    }

    cout<<"Promedio grupal: "<<grupo.promedioGrupal()<<endl;

    cout<<"Mejor promedio: "<<grupo.mejorPromedio().getNombre()<<", "<<grupo.mejorPromedio().getEdad()<<" años, "<<grupo.mejorPromedio().getPromedio()<<" de promedio"<<endl;

    return 0;
}

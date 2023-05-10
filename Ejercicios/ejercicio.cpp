#include "ejercicio_h.h"

int main(){
    Grupo grupo(5);

    grupo.agregarAlumno("Juan", 20, 8.7);
    grupo.agregarAlumno("Maria", 19, 9.5);
    grupo.agregarAlumno("Pedro", 22, 7.3);
    grupo.agregarAlumno("Laura", 21, 6.5);
    grupo.agregarAlumno("Carlos", 20, 8.0);

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

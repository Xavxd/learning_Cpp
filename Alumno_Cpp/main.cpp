#include<iostream>
#include"Alumno.h"
#include<string>

using namespace std;
int main(){
        // nombre, carrera, escuela, edad, no_mat
        Alumno student_1("Nombre Ejemplo","ICE","ESIMEZ",20,3);
        float asignatures[]={10.0,10.0,10.0};

        //calcular calificacion
        student_1.calcular_promedio(asignatures);

        cout<<student_1.mostrar_alumno()<<"\n";
    }
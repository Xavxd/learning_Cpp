//Este es el codigo principal en donde se podran ejecutar todas las clases
#include<iostream>
#include<vector>
//importando clases
#include"Persona.h"
#include"Estudiante.h"

using namespace std;

int main(){
    /*instanciar objetos ya con herencia terminada*/
    Estudiante* estudiante_a = new Estudiante("Xavi",15,3);
    

    //vector de calificaciones de prueba 
    vector <double> calif{10.0,10.0,10.0};
    double prom =estudiante_a->calcular_promedio(calif);

    cout<<estudiante_a->mostrar_persona()<<endl;
}
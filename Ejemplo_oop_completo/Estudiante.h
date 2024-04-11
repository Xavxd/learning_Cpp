#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include<vector>
//para poder heredar la clase hay que importarla usando -include-
#include "Persona.h"

class Estudiante :public Persona{
    private:
        /* data */
        int num_mat;//cantidad de materias
        double promedio;
        vector<double> claif;
    public:
        //constructores
        Estudiante();
        Estudiante(string nombre, int edad, int num_mat);
        ~Estudiante();
        //metodos
        double calcular_promedio( vector<double>calif);
        string mostrar_persona() override;    

        //getter y setter 
        void set_num_mat(int num_mat);
        int get_num_mat();
        void set_promedio(double promedio);
        double get_promedio();
};

/*ahora que Estudiante heredo la clase persona, puede usar sus metodos y atributos usando los metodos 
de la clase persona para estableser nombre y edad*/
Estudiante::Estudiante(): Persona(){
    set_nombre("");
    set_edad(0);
    //Las variables que son unicas para Estudiante si necesitan establecer valores en esta clase
    this->num_mat=0;
}

Estudiante::Estudiante(string nombre, int edad, int num_mat): Persona(){
    set_nombre(nombre);
    set_edad(edad);
    this->num_mat=num_mat;
}

Estudiante::~Estudiante(){
}

//metodos
double Estudiante::calcular_promedio(vector<double>calif){
    double suma;
    for(double cali :calif){
        suma+=cali;
    }

    promedio=suma/num_mat;
    return promedio;  
}

string Estudiante::mostrar_persona(){
    return "nombre del estudiante: "+get_nombre()+"\n"+"edad: "+to_string(get_edad())+"\n"+"promedio: "+to_string(promedio);
}

//getters y setters
void Estudiante::set_num_mat(int num_mat){
    this->num_mat=num_mat;
}

int Estudiante::get_num_mat(){
    return num_mat;
}

void Estudiante::set_promedio(double promedio){
    this->promedio=promedio;
}

double Estudiante::get_promedio(){
    return promedio;
}

#endif
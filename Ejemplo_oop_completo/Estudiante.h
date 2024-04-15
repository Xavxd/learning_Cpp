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
        Estudiante(int edad, string nombre,string rfc,string direccion, string email, string redsocial,string telefonos, int num_mat);
        ~Estudiante();
        //metodos
        void calcular_promedio( vector<double>calif);
        string mostrar_persona() override;    

        //getter y setter 
        void set_num_mat(int num_mat);
        int get_num_mat();
        void set_promedio(double promedio);
        double get_promedio();
};

/*ahora que Estudiante heredo la clase persona, puede usar sus metodos y atributos usando los metodos 
de la clase persona para estableser nombre y edad*/
Estudiante::Estudiante(){
    set_nombre("");
    set_edad(0);
    set_rfc("");
    set_direccion("");
    set_email("");
    set_redsocial("");
    set_telefono("");
    //Las variables que son unicas para Estudiante si necesitan establecer valores en esta clase
    this->num_mat=0;
}

Estudiante::Estudiante(int edad, string nombre,string rfc,string direccion, string email, string redsocial,string telefono, int num_mat){
    set_nombre(nombre);
    set_edad(edad);
    set_rfc(rfc);
    set_direccion(direccion);
    set_email(email);
    set_redsocial(redsocial);
    set_telefono(telefono);
    this->num_mat=num_mat;
}

Estudiante::~Estudiante(){}

//metodos
void Estudiante::calcular_promedio(vector<double>calif){
    double suma;
    for(double cali :calif){
        suma+=cali;
    }
    promedio=suma/num_mat;  
}

string Estudiante::mostrar_persona(){
    string str_1="Nombre del estudiante: "+get_nombre()+"\nEdad: "+ to_string(get_edad())+"\nRFC: "+get_rfc();
    string str_2="\nDireccion: "+get_direccion()+"\nE-mail: "+get_email()+"\nRed social: "+get_redsocial()+"\ntelefono: "+get_telefono();
    return str_1+str_2+"promedio: "+to_string(promedio);
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
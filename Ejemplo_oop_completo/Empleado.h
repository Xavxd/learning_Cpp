#ifndef EMPLEADO_H
#define EMPLEADO_H
#include<string>
#include"Persona.h"
using namespace std;

class Empleado :public Persona{
private:
    /* data */
    float sal;
public:
    //constructores 
    Empleado(int edad, string nombre,string rfc,string direccion, string email, string redsocial,string telefono,float sal);
    Empleado();
    ~Empleado();//destructor
    //getter y setter
    void set_salario(float sal);
    float get_salario();
    //metodos:
    string mostrar_persona() override;
};

Empleado::Empleado(int edad, string nombre,string rfc,string direccion, string email, string redsocial,string telefono,float sal){
    set_nombre(nombre);
    set_edad(edad);
    set_rfc(rfc);
    set_direccion(direccion);
    set_email(email);
    set_redsocial(redsocial);
    set_telefono(telefono);
    this->sal=sal;
}

Empleado::Empleado(){
    set_nombre("");
    set_edad(0);
    set_rfc("");
    set_direccion("");
    set_email("");
    set_redsocial("");
    set_telefono("");
    this->sal=0.0;
}

Empleado::~Empleado(){}

void Empleado::set_salario(float sal){
    this->sal=sal;
}

float Empleado::get_salario(){
    return sal;
}

string Empleado::mostrar_persona(){
    string str_1="Nombre: "+get_nombre()+"\nEdad: "+ to_string(get_edad())+"\nRFC: "+get_rfc();
    string str_2="\nDireccion: "+get_direccion()+"\nE-mail: "+get_email()+"\nRed social: "+get_redsocial()+"\ntelefono: "+get_telefono();
    return str_1 + str_2 + "\nSalario: "+to_string(sal);
}

#endif
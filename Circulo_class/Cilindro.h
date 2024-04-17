#ifndef CILINDRO_H
#define CILINDRO_H
#include "Circulo.h"
#include<math.h>
#include<string>
using namespace std;

class Cilindro:public Circulo{
private:
    /* data */
    float altura,volumen;
public:
    Cilindro(string nombre,float radio,float altura);
    Cilindro();
    ~Cilindro();
    //getter y setter
    void set_altura(float altura);
    float get_altura();
    void set_volumen(float volumen);
    float get_volumen();
    //metodo 
    void calcular_volumen();
    void calcular_area() override;
    string mostrar_datos() override;
};

Cilindro::Cilindro(string nombre,float radio,float altura){
    set_nombre(nombre);
    set_radio(radio);
    this->altura=altura;
}

Cilindro::Cilindro(){
    set_nombre("");
    set_radio(0.0);
    this->altura=0.0;
}

Cilindro::~Cilindro(){}

void Cilindro::set_altura(float altura){
    this->altura=altura;
}
float Cilindro::get_altura(){
    return altura;
}

void Cilindro::set_volumen(float volumen){
    this->volumen=volumen;
}

float Cilindro::get_volumen(){
    return volumen;
}

void Cilindro::calcular_volumen(){
    calcular_area();//llamando al metodo para calcular area de la clase principal "circulo"
    volumen=get_area()*altura;
}

void Cilindro::calcular_area(){
    float a=(2*pi*get_radio()*get_altura()) + (2*pi*pow(get_radio(),2));
    set_area(a);
}

string Cilindro::mostrar_datos(){
    return "Nombre: "+get_nombre()+"Radio: "+to_string(get_radio())+"\nAltura: "+to_string(get_altura())+
     "Area: "+to_string(get_area())+"\nVolumen: "+to_string(get_volumen());
}

#endif
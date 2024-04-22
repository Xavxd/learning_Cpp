#ifndef ESFERA_H
#define ESFERA_H
#include "Circulo.h"
#include <math.h>
#include <string>
using namespace std;

class Esfera : public Circulo{
    private:
        /* data */
        float volumen;
    public:
    Esfera(string nombre,float radio);
    Esfera();
    ~Esfera();
     //getters y setter
    void set_volumen(float volumen);
    float get_volumen();
    //metodos
    void calcular_volumen();
    void calcular_area()override;
    string mostrar_datos() override;
};

Esfera::Esfera(string nombre,float radio){
    set_nombre(nombre);
    set_radio(radio);
}

Esfera::Esfera(){
    set_nombre("");
    set_radio(0.0);
}

Esfera::~Esfera(){}

void Esfera::set_volumen(float volumen){
    this->volumen=volumen;
}

float Esfera::get_volumen(){
    return volumen;
}

void Esfera::calcular_volumen(){
    volumen=(4/3)*pi*pow(get_radio(),3);
}

void Esfera::calcular_area(){
    float a=4*pi*pow(get_radio(),2);
    set_area(a);
}

string Esfera::mostrar_datos(){
    return "Nombre: "+get_nombre()+"\nRadio: "+to_string(get_radio())+"\nArea: "+to_string(get_area())+
    "\nVolumen: "+to_string(get_volumen());
}


#endif
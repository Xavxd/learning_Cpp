#ifndef CONO_H
#define CONO_H
#include "Circulo.h"
#include<math.h>

class Cono: public Circulo{
    private:
    /* data */
    float altura,volumen,generatriz;
    public:
        //constructor sin parametros y destructor
        Cono(string nombre, float radio, float altura, float generatriz);
        Cono();
        ~Cono();
        //getters y setters
        void set_altura(float altura);
        float get_altura();
        void set_volumen(float volumen);
        float get_volumen();
        void set_generatriz(float generatriz);
        float get_generatriz();
        /*estos metodos se podrian heredar de la calse cilindro o implementar en una interface pero 
        este codigo aun no entra en temas de herencia multiple o uso de interfaces*/
        void calcular_volumen();
        void calcular_area()override;
        string mostrar_datos() override;
};

Cono::Cono(string nombre, float radio, float altura, float generatriz){
    set_nombre(nombre);
    set_radio(radio);
    this->altura=altura;
    this->generatriz=generatriz;
}


Cono::Cono(){
    set_nombre("");
    set_radio(0.0);
    set_altura(0.0);
}

Cono::~Cono(){
}

void Cono::set_altura(float altura){
    this->altura=altura;
}
float Cono::get_altura(){
    return altura;
}

void Cono::set_volumen(float volumen){
    this->volumen=volumen;
}

float Cono::get_volumen(){
    return volumen;
}

void Cono::set_generatriz(float generatriz){
    this->generatriz=generatriz;
}

float Cono::get_generatriz(){
    return generatriz;
}

void Cono::calcular_area(){
    float a=(pi*pow(get_radio(),2))+(pi*get_radio()*generatriz);
    set_area(a);
}

void Cono::calcular_volumen(){
    volumen=(pi*pow(get_radio(),2)*altura);
}

string Cono::mostrar_datos(){
    return "Nombre: "+get_nombre()+"Radio: "+to_string(get_radio())+"\nAltura: "+to_string(get_altura())+
     "Area: "+to_string(get_area())+"\nVolumen: "+to_string(get_volumen());
}


#endif
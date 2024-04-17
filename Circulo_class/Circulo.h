#ifndef CIRCULO_H
#define CIRCULO_H
#include<string>
#include<math.h>
using namespace std;
const float pi=3.1416;//esta variable es una constante ya que no cambia su valor

class Circulo{
    private:
        /* data */
        string nombre;
        float area,radio;
    public:
        //constructores
        Circulo(string nombre,float radio);
        Circulo();
        ~Circulo();
        //getters y setters 
        void set_nombre(string nombre);
        string get_nombre();
        void set_area(float area);
        float get_area();
        void set_radio(float radio);
        float get_radio();
        //metodos 
        virtual void calcular_area();
        virtual string mostrar_datos();
};

Circulo::Circulo(string nombre,float radio){
    this->nombre=nombre;
    this->radio=radio;
}

Circulo::Circulo(){
    this->nombre="";
    this->area=0.0;
    this->radio=0.0;
}

Circulo::~Circulo(){}


void Circulo::set_nombre(string nombre){
   this->nombre=nombre;
}

string Circulo::get_nombre(){
    return nombre;
}

void Circulo::set_area(float area){
    this->area=area;
}

float Circulo::get_area(){
    return area;
}

void Circulo::set_radio(float radio){
    this->radio=radio;
}

float Circulo::get_radio(){
    return radio;
}

void Circulo::calcular_area(){
    area=pi*pow(radio,2);
}

string Circulo::mostrar_datos(){
    return "Nombre: "+get_nombre()+"\nRadio:"+to_string(get_radio())+"\nArea: "+to_string(get_area());
}
#endif
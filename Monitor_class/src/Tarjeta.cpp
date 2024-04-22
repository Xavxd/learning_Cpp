#include "Tarjeta.h"
#include <string>

Tarjeta::Tarjeta()
{
   this->procesador="AND";
   this->velocidad=256.0;
   this->memoria=1.0;
}

Tarjeta::Tarjeta(string procesador, float velocidad, float memoria)
{
    this->procesador= procesador;
    this->velocidad=velocidad;
    this->memoria=memoria;
}

Tarjeta::~Tarjeta(){}

void Tarjeta::setProcesador(string procesador){
    this->procesador=procesador;
}
string Tarjeta::getProcesador(){
    return procesador;
}
void Tarjeta::setVelocidad(float velocidad){
    this->velocidad=velocidad;
}
float Tarjeta::getVelocidad(){
    return velocidad;
}
void Tarjeta::setMemoria(float memoria){
    this->memoria=memoria;
}
float Tarjeta::getMemoria(){
    return memoria;
}

string Tarjeta::muestra_tarjeta(){
    return "Procesador: "+procesador+
           "\nVelocidad: "+std::to_string(velocidad)+
           "\nMemoria: "+std::to_string(memoria);
}
#include "../include/Computadora.h"
/*se necesita (../) para indicar que tiene que buscar el archivo en una carpeta fuera de la actual que es "src"*/
#include <string>


Computadora::Computadora(string marca, string periferico, float disco, string type, string color, int size, string procesador, float velocidad, float memoria){
    this->marca=marca;
    this->periferico=periferico;
    this->disco=disco;
    Monitor* monitor= new Monitor(type,color,size);
    Tarjeta* tarjeta= new Tarjeta(procesador,velocidad,memoria);
}

Computadora::Computadora(){
    this->marca="";
    this->periferico="";
    this->disco=0.0;
    Monitor* monitor= nullptr;
    Tarjeta* tarjeta= nullptr;
}

Computadora::~Computadora(){}

void Computadora::setMarca(string marca){
    this->marca=marca;
}
string Computadora::getMarca(){
    return marca;
}
        
void Computadora::setPeriferico(string periferico){
    this->periferico=periferico;
}
string Computadora::getPeriferico(){
    return periferico;
}
        
void Computadora::setDisco(float disco){
    this->disco=disco;
}  
float Computadora:: getDisco(){
    return disco;
}     


string Computadora::muestra_computadora(){
    return "Marca: "+marca+
    "\nPeriferico: "+periferico+
    "\nDisco: "+ std::to_string(disco);
}
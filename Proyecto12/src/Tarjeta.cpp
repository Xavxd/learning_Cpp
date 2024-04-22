#include "Tarjeta.h"

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


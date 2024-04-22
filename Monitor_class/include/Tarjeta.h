#ifndef TARJETA_H
#define TARJETA_H
#include <iostream>
using std::string;

//clase base 2
class Tarjeta
{
    private:
        string procesador;
        float velocidad, memoria;
    public:
        Tarjeta();
        Tarjeta(string procesador, float velocidad, float memoria);
        ~Tarjeta();
        void setProcesador(string procesador);
        string getProcesador();
        void setVelocidad(float velocidad);
        float getVelocidad();
        void setMemoria(float memoria);
        float getMemoria();
        string muestra_tarjeta();
};

#endif // TARJETA_H

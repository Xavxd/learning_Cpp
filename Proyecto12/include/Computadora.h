#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
#include <Monitor.h>
#include <Tarjeta.h>
using namespace std;

class Computadora : public Monitor : public Tarjeta //se incluye manualmente la clase tarjeta pq no se pude en code
{
    public:
        Computadora();
        Computadora(string,string,int,string, float, float,string,string,float);
        ~Computadora();
        void muestra_computadora();

    protected:

    private:
        string marca, periferico;
        float disco;
};

#endif // COMPUTADORA_H

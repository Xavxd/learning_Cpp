#ifndef TARJETA_H
#define TARJETA_H
#include <iostream>
using namespace std;
//clase base 2
class Tarjeta
{
    public:
        Tarjeta();
        Tarjeta(string, float, float);
        ~Tarjeta();
        void muestra_tarjeta();

    protected:
        string procesador;
        float velocidad, memoria;

    private:
};

#endif // TARJETA_H

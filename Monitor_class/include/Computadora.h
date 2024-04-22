#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iostream>
#include <Monitor.h>
#include <Tarjeta.h>
using std::string;

class Computadora:public Monitor,public Tarjeta
{
    private:
        string marca, periferico;
        float disco;

    public:
        Computadora();
        Computadora(string marca, string periferico, float disco, string type, string color, int size, string procesador, float velocidad, float memoria);        
        ~Computadora();

        void setMarca(string marca);
        string getMarca();
        
        void setPeriferico(string periferico);
        string getPeriferico();
        
        void setDisco(float disco);  
        float getDisco();     
        
        string muestra_computadora();
};

#endif // COMPUTADORA_H

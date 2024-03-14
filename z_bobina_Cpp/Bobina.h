#ifndef BOBINA
#define BOBINA
#include<cmath>

class Bobina
{
private:
    /* data */
    //n=no. de espiras  m:permeabilidad del nucleo s:seccion del nucleo l:longitud de las lineas de flujo
    //l_i= valor de inductancia
    double n,m,s,l,l_i;
public:
    Bobina( double n,double m,double s,double l);
    ~Bobina();

    //metodos
    double calcular_inductancia();
};

double Bobina::calcular_inductancia(){
    l_i=(pow(n,2)*m*s)/l;
    return l_i;
}

Bobina::Bobina(double n,double m,double s,double l){
    this->n=n;
    this->m=m;
    this->s=s;
    this->l=l;
}

Bobina::~Bobina(){
}


#endif
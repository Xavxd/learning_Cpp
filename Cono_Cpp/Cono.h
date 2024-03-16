#ifndef CONO
#define CONO
#include<cmath>

class Cono
{
private:
    /* data r= radio, l=generatriz del cono h=altura*/
    float r,l,a,v,h;
    static const double PI;

public:
        //1       2      3
    Cono(float r,float l,float h);
    ~Cono();

    float calcular_area();
    float calcular_volumen();
};

float Cono::calcular_area(){
    a=(PI*r)*(r+l);
    return a;
}

float Cono::calcular_volumen(){
    v=(PI*pow(r,2)*h)/3;
    return v;
}

Cono::Cono(float r,float l,float h){
    this->r=r;
    this->l=l;
    this->h=h;
}

Cono::~Cono(){
    r=0.0;
    l=0.0;
    h=0.0;
}

const double Cono::PI = 3.14159265358979323846;

#endif
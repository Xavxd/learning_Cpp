#ifndef ESCALENO
#define ESCALENO
#include <cmath>

class Escaleno
{
private:
    /* data */
    double a,b,c,s;
public:
    Escaleno(double a,double b,double c);
    ~Escaleno();

    //metodos
    double calcular_area();
    double calcular_perimetro();
};

double Escaleno::calcular_area(){
    double r=sqrt(s*((s-a)*(s-b)*(s-c)));
    return r;
}

double Escaleno::calcular_perimetro(){
    double r=a+b+c;
    return r;
}

Escaleno::Escaleno(double a,double b,double c){
    this->a=a;
    this->b=b;
    this->c=c;
    this->s= (a+b+c)/2;
}

Escaleno::~Escaleno(){
}

#endif
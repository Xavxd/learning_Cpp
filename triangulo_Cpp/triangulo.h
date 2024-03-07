//este tipo de archivos se utiliza para crear clases en cpp
#ifndef TRIANGULO_H
#define TRIANGULO_H

class triangulo
{
private:
    /* data */
    double co,ca,h,area,perimetro;
public:
    //constructors
    triangulo(double co,double ca,double h);
    ~triangulo();
    //methods
    double calcular_area();
    double calcular_perimetro();
};

triangulo::triangulo(double _co, double _ca, double _h){
    this->co =_co;
    this->ca =_ca;
    this->h =_h;
}

triangulo::~triangulo(){    
}

double triangulo::calcular_perimetro(){
    return co+ca+h;
}

double triangulo::calcular_area(){
    area=(ca*co)/2;
    return area;
}
/*Nota: es necesario crear los metodos porque si solo se crea un prototipo 
salta el tipo de error "code exit with 1"*/
#endif 
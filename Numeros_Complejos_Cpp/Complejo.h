#ifndef COMPLEJO
#define COMPLEJO

class Complejo
{
private:
    /* data */
    double real,imag;
public:
    //constructors
    Complejo(double real,double imag);
    ~Complejo();
    
    //getters
    double get_real();
    double get_imag();

    //methods
    Complejo suma(Complejo z_1,Complejo z_2);
    /*Complejo resta(Complejo z_1,Complejo z_2);
    Complejo multiplicacion(Complejo z_1,Complejo z_2);
    Complejo divicion(Complejo z_1,Complejo z_2);*/    
};

Complejo Complejo::suma(Complejo z_1,Complejo z_2){
    //real = ;
}

Complejo::Complejo(double real,double imag){
    this->real=real;
    this->imag=imag;
}

Complejo::~Complejo(){
    real=0.0;
    imag=0.0;
}

double Complejo::get_real(){
    return real;
}

double Complejo::get_imag(){
    return imag;
}


#endif
#ifndef COMPLEJO
#define COMPLEJO
#include <cmath>
#include <string>
#include <sstream>
#include<iomanip>
using namespace std;
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
    string get_complejo();

    //methods
    Complejo suma(Complejo z_1,Complejo z_2);
    Complejo resta(Complejo z_1,Complejo z_2);
    Complejo multiplicacion(Complejo z_1,Complejo z_2);
    Complejo divicion(Complejo z_1,Complejo z_2);
};

Complejo Complejo::suma(Complejo z_1,Complejo z_2){
    real = z_1.get_real() + z_2.get_real();
    imag = z_1.get_imag() + z_2.get_imag();

    return Complejo(real,imag);
}

Complejo Complejo::resta(Complejo z_1,Complejo z_2){
    real = z_1.get_real() - z_2.get_real();
    imag = z_1.get_imag() - z_2.get_imag();

    return Complejo(real,imag);
}

Complejo Complejo::multiplicacion(Complejo z_1,Complejo z_2){
    double a=z_1.get_real(),b=z_1.get_imag();//obteniendo los numeros de z_1
    double c=z_2.get_real(),d=z_2.get_imag();//obteniendo los numeros de z_2
    real= (a*c)+(b*d*(-1)) ;
    imag= (b*c)+(a*d) ;

    return Complejo(real,imag);
}

Complejo Complejo::divicion(Complejo z_1,Complejo z_2){
    double a=z_1.get_real(), b=z_1.get_imag();//obteniendo los numeros de z_1
    double c=z_2.get_real(), d=(z_2.get_imag())*(-1);//obteniendo los numeros de z_2
    real= ((a*c)+(b*d*(-1))) / (pow(c,2) + pow(d,2));
    imag= ((b*c)+(a*d)) / (pow(c,2) + pow(d,2));

    return Complejo(real,imag);
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

string Complejo::get_complejo(){
    stringstream str,stimg;
    //dandole formato a los numeros 
    str<< fixed<< setprecision(2)<<real;
    stimg<< fixed<< setprecision(2)<<imag;
    string s= "("+ str.str() +","+ stimg.str() +")";
    return s;
}

#endif
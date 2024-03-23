#ifndef I_M_C
#define I_M_C
#include<string>
#include<cmath>

using namespace std;

class I_m_c{
private:
    string nombre;
    int edad;
    float imc,peso,altura;
public:
    //constructor
    I_m_c(string nombre ,int edad, float peso,float altura );
    //destructor
    ~I_m_c();

    float calcular_imc();
    string get_nombre();
    int get_edad();
    float get_imc();
    float get_peso();
    float get_altura();
    string get_datos();
};

float I_m_c::calcular_imc(){
    imc= peso/pow(altura,2);
    return imc;
}

string I_m_c::get_nombre(){
    return nombre;
}

int I_m_c::get_edad(){
    return edad;
}

float I_m_c::get_imc(){
    return imc;
}

float I_m_c::get_peso(){
    return peso;
}

float I_m_c::get_altura(){
    return altura;
}

string I_m_c::get_datos(){
    return "Nombre: "+ nombre+"\n" +"edad: "+ to_string(edad) +"\n"+ "imc: "+ to_string(imc) + "\n"+"peso: "+to_string(peso)+"\n"+"altura: "+to_string(altura);
}

I_m_c::I_m_c(string nombre, int edad, float peso, float altura){
    this->nombre=nombre;
    this->edad=edad;
    this->peso=peso;
    this->altura=altura;
}

I_m_c::~I_m_c(){
}

#endif  
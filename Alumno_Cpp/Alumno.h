#ifndef ALUMNO_CPP
#define ALUMNO_CPP
#include<string>
#include<iomanip>
#include <sstream> 

using namespace std;

class Alumno
{
private:
    /* data */
    string nombre,carrera,escuela; 
    int edad,no_mat;
    float calif;
public:
    //constructors
    Alumno(string nombre,string carrera,string escuela,int edad,int no_mat);
    ~Alumno();

    //methods
    void calcular_promedio(const float* ptr);
    string mostrar_alumno();
    int get_asignatures();
    float get_calif();
};

Alumno::Alumno(string nombre,string carrera,string escuela,int edad,int no_mat){
    this-> nombre=nombre;
    this-> carrera=carrera;
    this-> escuela=escuela;
    this-> edad=edad;
    this-> no_mat=no_mat;
}
    
Alumno::~Alumno(){
    nombre="";
    carrera="";
    escuela="";
    edad=0;
    no_mat=0;
}

//get to number of asignatures
int Alumno::get_asignatures(){
    return no_mat;
}

float Alumno::get_calif(){
    return calif;
}

void Alumno::calcular_promedio(const float* ptr){
    float sum=0;
    
    for(int i=0;i<no_mat;i++){
        sum+= *ptr;
    }

    calif=sum/no_mat;
}

string Alumno::mostrar_alumno(){
    /*esta función retorna todos los datos del alumno como una sola string, la función floor se utiliza 
    para redondear la calificación*/
    stringstream strm;//este tipo de variables se usa para establecer la precisión de los numeros
    /*fixed ayuda a mantener el formato decimal y setprecision delimita la cantidad de decimales*/
    strm<< fixed<< setprecision(2)<<calif;
    string edad_calif=to_string(edad)+"\ncalificacion final: \n"+ strm.str();
    
    return string("nombre: \n")+nombre+"\ncarrera: \n"+carrera+"\nescuela: \n"+escuela+"\nedad: \n"+edad_calif;
}

#endif
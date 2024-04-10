#ifndef PERSONA_H
#define PERSONA_H
#include<string>
using namespace std;

//La clase persona sera considerada como la MASTER CLASS
class Persona{
//los modificadores de acceso sirven para poder delimitar el uso de las variables y normalmente se inicializan en private 
    private:
        /* data */
        string nombre;
        int edad;
    public:
        //constructores
        Persona();
        Persona(int edad, string nombre);
        ~Persona();

        //getter y setters
        /*todas las variables de cada clase deben tener getters y setters*/ 
        void set_edad(int edad);
        int get_edad();
        void set_nombre(string nombre);
        string get_nombre();
        /*siempre habra un metodo para retornar toda la info de un objeto,como en este caso de persona
        y la palabra virtual nos permitira sobreescribir esta funcion en clases heredadas*/
        virtual string mostrar_persona();
};

//constructor sin parametros
Persona::Persona(){
    /*este constructor es usado para casos en los que se necesite crear un objeto persona 
    sin datos ya especificados para poder asignarle datos despues seria usando los setters*/
    edad=0;
    nombre="";
}

//constructor con parametros
Persona::Persona(int edad, string nombre){
    //this indica que se usa la variable de la clase y la variable asignada es el parametro del constructor
    this->edad=edad;
    this->nombre=nombre;
}
//el destructor de objeto se encarga de limpiar la memoria ya usada una vez ue el objeto no es necesario
Persona::~Persona(){}

/*---getters y setters*/
void Persona::set_edad(int edad){
    this->edad=edad;
}

int Persona::get_edad(){
    return edad;
}

void Persona::set_nombre(string nombre){
    this->nombre=nombre;
}

string Persona::get_nombre(){
    return nombre;
}

/*este es un metodo que se usa para obtener toda la informacion de un objeto en especifico 
en caso de ser necesario y se considera una buena practica usarlo*/
string Persona::mostrar_persona(){
    return "nombre: "+nombre+"\n"+"edad: "+ to_string(edad);
}

#endif
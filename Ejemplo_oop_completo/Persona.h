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
        // 5 datos extra
        string direccion,email,redsocial,telefono,rfc;
    public:
        //constructores
        Persona();
        Persona(int edad, string nombre,string rfc,string direccion, string email, string redsocial,string telefono);
        ~Persona();

        //getter y setters
        /*todas las variables de cada clase deben tener getters y setters*/ 
        void set_edad(int edad);
        int get_edad();
        void set_nombre(string nombre);
        string get_nombre();
        void set_rfc(string rfc);
        string get_rfc();
        void set_direccion(string direccion);
        string get_direccion();
        void set_email(string email);
        string get_email();
        void set_redsocial(string redsocial);
        string get_redsocial();
        void set_telefono(string telefono);
        string get_telefono();
        /*siempre habra un metodo para retornar toda la info de un objeto,como en este caso de persona
        y la palabra virtual nos permitira sobreescribir esta funcion en clases heredadas*/
        virtual string mostrar_persona();
};

//constructor sin parametros
Persona::Persona(){
    /*este constructor es usado para casos en los que se necesite crear un objeto persona 
    sin datos ya especificados para poder asignarle datos despues seria usando los setters*/
    this->edad=0;
    this->nombre="";
    this->direccion="";
    this->email="";
    this->redsocial="";
    this->telefono="";
    this->rfc="";
}

//constructor con parametros
Persona::Persona(int edad, string nombre,string rfc,string direccion, string email, string redsocial,string telefono){
    //this indica que se usa la variable de la clase y la variable asignada es el parametro del constructor
    this->edad=edad;
    this->nombre=nombre;
    this->rfc=rfc;
    this->direccion=direccion;
    this->email=email;
    this->redsocial=redsocial;
    this->telefono=telefono;
}
//el destructor de objeto se encarga de limpiar la memoria ya usada una vez ue el objeto no es necesario
Persona::~Persona(){}

/*---getters y setters--*/
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

void Persona::set_rfc(string rfc){
    this->rfc=rfc;
}

string Persona::get_rfc(){
    return rfc;
}

void Persona::set_direccion(string direccion){
    this->direccion=direccion;
}

string Persona::get_direccion(){
    return direccion;
}

void Persona::set_email(string email){
    this->email=email;
}

string Persona::get_email(){
    return email;
}

void Persona::set_redsocial(string redsocial){
    this->redsocial=redsocial;
}

string Persona::get_redsocial(){
    return redsocial;
}

void Persona::set_telefono(string telefono){
    this ->telefono=telefono;
}

string Persona::get_telefono(){
    return telefono;
}
/*este es un metodo que se usa para obtener toda la informacion de un objeto en especifico 
en caso de ser necesario y se considera una buena practica usarlo*/

string Persona::mostrar_persona(){
    string str_1="nombre: "+nombre+"\nedad: "+ to_string(edad)+"\nrfc: "+rfc;
    string str_2="\ndireccion: "+direccion+"\ne-mail: "+email+"\nred social: "+redsocial +"\ntelefono: "+telefono;
    return str_1+str_2;
}

#endif
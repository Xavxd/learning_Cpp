//Este es el codigo principal en donde se podran ejecutar todas las clases
#include<iostream>
#include<vector>
#include<string>
#include<limits>
//importando clases
#include"Persona.h"
#include"Estudiante.h"
#include"Empleado.h"

using namespace std;
string nombre,rfc,direccion,email,redsocial,telefono;
int edad;
void lectura_var_comunes();
void menu();

int main(){
    int opt=0;
    int num_mat;
    double cali_m;
    float salario;
    /*No se pueden instanciar objetos dentro de un switch por lo que se instancian desde afuera*/
    Estudiante* estudiante=nullptr;
    Empleado* empleado=nullptr;
    vector<double> calif;
    do{
        menu();//mostrando el menu
        cout<<"\nSeleccione la opcion que desee:"<<endl;
        cin>>opt;
        /*en caso de que el usuario ingrese letras en lugar de numeros se genera un bucle infinito, para evitar est hacemos este if*/
        if(cin.fail()||cin.peek()!='\n'){
            cin.clear();//limpia el buffer de la memoria de computadora
            cin.ignore(numeric_limits< streamsize >::max(),'\n');
            /*ignora los caracteres que no sean numeros y el salto de linea es el limite de cuando termina de ignorar*/
        }

        switch (opt){
            case 1:
                /* code */
                //lectura_var_comunes();
                cout<<"ingrese la cantidad de materias: "<<endl;
                cin>>num_mat;
                for(int i=0;i<num_mat;i++){
                    cout<<"ingrese calificacion "<<i<<endl;
                    cin>>cali_m;
                    calif.push_back(cali_m);
                }
                estudiante= new Estudiante(edad,nombre,rfc,direccion,email,redsocial,telefono,num_mat);
                estudiante->calcular_promedio(calif);//calculando el promedio del estudiante
                estudiante->mostrar_persona();
                break;
            case 2:
                /* code */
                lectura_var_comunes();
                cout<<"ingrese el salario recibido: "<<endl;
                cin>>salario;
                empleado= new Empleado(edad,nombre,rfc,direccion,email,redsocial,telefono,salario);
                empleado->mostrar_persona();
                break;
            case 3:
                cout<<"saliendo..."<<endl;
                break;
            default:
                cout<<"opcion no valida"<<endl;
            break;
        }
    }while(opt!=3);
}

void menu(){
    cout<<"Bienvenido usuario! Estas son las opciones disponibles"<<endl;
    cout<<"1. crear y mostrar un objeto tipo Estudiante"<<endl;
    cout<<"2. crear y mostrar un objeto tipo Empleado"<<endl;
    cout<<"3. salir"<<endl;
}

void lectura_var_comunes(){
    cout<<"ingrese su nombre: "<<endl;
    cin>>nombre;
    cout<<"ingrese su edad: "<<endl;
    cin>>edad;
    cout<<"ingrese su rfc: "<<endl;
    cin>>rfc;
    cout<<"ingrese su direccion: "<<endl;
    cin>>direccion;
    cout<<"ingrese su e-mail: "<<endl;
    cin>>email;
    cout<<"ingrese la red social que usa: "<<endl;
    cin>>redsocial;
    cout<<"ingrese su telefono: "<<endl;
    cin>>telefono;
}
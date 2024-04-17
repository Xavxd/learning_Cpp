#include<iostream>
#include<string>

#include "Circulo.h"
#include "Cilindro.h"
#include "Cono.h"
#include "Esfera.h"

using namespace std;
//data:
    string nombre;
    float radio,altura,generatriz;
void menu();
void leer_datos();

int main(){ 
    
    int opt=4;
    Circulo* circulo;
    Cilindro* cilindro;
    Cono* cono;
    Esfera* esfera;

    do{
        cout<<"Bienvenido usuario, selecciona la opcion que desea hacer"<<endl;
        menu();
        cin>>opt;
         /*en caso de que el usuario ingrese letras en lugar de numeros se genera un bucle infinito, para evitar est hacemos este if*/
        if(cin.fail()||cin.peek()!='\n'){
            cin.clear();//limpia el buffer de la memoria de computadora
            cin.ignore(numeric_limits< streamsize >::max(),'\n');
            /*ignora los caracteres que no sean numeros y el salto de linea es el limite de cuando termina de ignorar*/
        }

        switch (opt)
        {
        case 1:
            /* cono */
            leer_datos();
            cout<<"Ingrese el valor de la generatriz"<<endl;
            cin>>generatriz;
            cout<<"Ingrese el valor de la altura"<<endl;
            cin>>altura;
            cono=new Cono(nombre,radio,altura,generatriz);
            cout<<cono->mostrar_datos()<<endl;
            break;
        case 2:
            /* esfera */
            leer_datos();
            esfera=new Esfera(nombre,radio);
            cout<<esfera->mostrar_datos()<<endl;
            break;
        case 3:
            /* cilindro */
            leer_datos();
            cout<<"Ingrese el valor de la altura"<<endl;
            cin>>altura;
            cilindro=new Cilindro(nombre,radio,altura);
            cout<<cilindro->mostrar_datos()<<endl;
            break;
        case 4:
            /* circulo */
            leer_datos();
            circulo= new Circulo(nombre,radio);
            cout<<circulo->mostrar_datos()<<endl;
            break;
        case 5:
            cout<<"hasta luego"<<endl;
            break;
        default:
            cout<<"Opcion invalida, porfavor eliga una opcion correcta"<<endl;
            break;
        }
    }while(opt!=5);
}

void menu(){
    cout<<"1. Crear un cono"<<endl;
    cout<<"2. Crear una esfera"<<endl;
    cout<<"3. Crear un cilindro"<<endl;
    cout<<"4. Crear un circulo"<<endl;
    cout<<"5. Salir"<<endl;
}

void leer_datos(){
    cout<<"Ingrese el nombre del objeto"<<endl;
    cin>>nombre;
    cout<<"Ingrese el radio"<<endl;
    cin>>radio;
}
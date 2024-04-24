#include<iostream>
#include<cstdlib>
#include "../include/Computadora.h"
/*Este codigo no se puede ejecutar en vscode, es necesario abrirlo desde viusal studio que es diferente
la diferencia es que uno soporta un proyecto completo mientras que vscode es para proyectos mas ligeros pero el codigo sí 
funciona*/

using namespace std;

int main(){
    /*pendiente*/
    system("color 05");
    Computadora *comp1= new Computadora;
    cout<< comp1 ->muestra_monitor()<<endl;
    cout<< comp1 ->muestra_tarjeta() <<endl;
    cout<< comp1 ->muestra_computadora() <<endl;
    system("pause>NULL");
    system("cls");
    Computadora *comp2= new Computadora( "IBM", "mouse/teclado", 100,"Monocromatico", "Blanco",20,"AMD_Rizen_5600G", 150.0,64);
    cout<<comp2 ->muestra_monitor()<<endl;
    cout<<comp2 ->muestra_tarjeta()<<endl;
    cout<<comp2 ->muestra_computadora()<<endl;
    system("pause>NULL");
    system("cls");
    return 0;
}
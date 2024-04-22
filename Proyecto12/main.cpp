#include <iostream>
#include <cstdlib>
#include "Computadora.h"
using namespace std;

int main()
{
    system("color 05");
    Computadora *comp1= new Computadora;
    comp1 ->muestra_monitor();
    comp1 ->muestra_tarjeta();
    comp1 ->muestra_computadora();
    system("pause>NULL");
    system("cls");
    Computadora *comp2= new Computadora("Monocromatico", "Blanco",16,"AND",128.0,64, "ibm", "mouse/teclado", 28);
    comp2 ->muestra_monitor();
    comp2 ->muestra_tarjeta();
    comp2 ->muestra_computadora();
    system("pause>NULL");
    system("cls");
    return 0;
}

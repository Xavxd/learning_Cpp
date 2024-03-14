#include <iostream>
#include"Bobina.h"

using namespace std;

int main(){
    //n=no. de espiras  m:permeabilidad del nucleo s:seccion del nucleo l:longitud de las lineas de flujo
    Bobina bobina_1(100,400,4,20);

    cout<<"inductancia de bobina 1= "<<bobina_1.calcular_inductancia()<< "\n";
}
#include<iostream>
#include "Escaleno.h"
using namespace std;

int main(){
    //instanciando un nuevo objeto
    Escaleno tr_a(5,4,3);

    cout<<"area= "<<tr_a.calcular_area()<<"\n";
    cout<<"area= "<<tr_a.calcular_perimetro()<<"\n";
}
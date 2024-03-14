#include<iostream>
#include"Rectangulo.h"

using namespace std;

int main(){
    Rectangulo rec_1(4,5);
    
    cout<<"area= "<< rec_1.calcular_area()<<"\n";
    cout<<"perimetro= "<< rec_1.calcular_perimetro()<<"\n";
}
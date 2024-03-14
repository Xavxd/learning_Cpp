#include<iostream>
#include"Cono.h"
using namespace std;
int main(){
    //sintax: cono name(r= radio, l=generatriz del cono h=altura)
    Cono c(5,10,15);

    cout<<"area= "<< c.calcular_area()<< "\n";
    cout<<"volumen= "<<c.calcular_volumen() <<"\n";
}
//en el metodo main es donde va toda la logica y el metodo principal
#include<iostream>
#include "triangulo.h"

using namespace std;

int main(){
    //triangulo a co=2 ca=3 h=5
    triangulo tr_a (2,3,5);
    double perimetro_a,area_a;

    area_a=tr_a.calcular_area();
    perimetro_a=tr_a.calcular_perimetro();

    cout<<"para el triangulo a: "<<"\n";
    cout<<"area= "<<area_a<<"\n";
    cout<<"perimetro= "<<perimetro_a<<"\n";

    //triangulo b co=4 ca=5 h=6
     triangulo tr_b (4,5,6);
    double perimetro_b,area_b;

    area_b=tr_b.calcular_area();
    perimetro_b=tr_b.calcular_perimetro();

    cout<<"para el triangulo b: "<<"\n";
    cout<<"area= "<<area_b<<"\n";
    cout<<"perimetro= "<<perimetro_b<<"\n";

    //triangulo c co= ca= h=
    triangulo tr_c (2,3,6);
    double perimetro_c,area_c;

    area_c=tr_c.calcular_area();
    perimetro_c=tr_c.calcular_perimetro();

    cout<<"para el triangulo c: "<<"\n";
    cout<<"area= "<<area_c<<"\n";
    cout<<"perimetro= "<<perimetro_c<<"\n";
}
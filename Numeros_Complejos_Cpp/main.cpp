#include <iostream>
#include "Complejo.h"

using namespace std;
int main(){
    //declarando numeros
    Complejo z_1(9,-4);
    Complejo z_2(8,5);

    //Operaciones:
    Complejo s=s.suma( z_1,z_2 );
    Complejo r=r.resta(z_1,z_2);
    Complejo multi=multi.multiplicacion(z_1,z_2);
    Complejo divic=divic.divicion(z_1,z_2);
    
   cout<<"suma= "<< s.get_complejo() <<"\n";
   cout<<"resta= "<< r.get_complejo() <<"\n";
   cout<<"multiplicacion= "<< multi.get_complejo() <<"\n";
   cout<<"divicion= "<< divic.get_complejo() <<"\n";
} 
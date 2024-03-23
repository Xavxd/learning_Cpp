#include<iostream>
#include "I_m_c.h"
using namespace std;
int main(){
    //datos: nombre edad peso altura
   I_m_c persona1("Jonathan Xavier",20,68.0,1.75);
   persona1.calcular_imc();
   
   cout<<persona1.get_datos()<<"\n";
}
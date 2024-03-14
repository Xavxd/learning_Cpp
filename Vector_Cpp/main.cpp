#include<iostream>
#include"Vector.h"

using namespace std;

int main(){
    Vector v_a(3,2,4);
    Vector v_b(4,3,5);
    Vector v_s=v_s.suma(v_a,v_b);
    Vector v_r=v_r.resta(v_a,v_b);

    cout<<"suma= "<<v_s.obtener_vector()<<"\n";
    cout<<"resta= "<<v_r.obtener_vector()<<"\n";
    cout<<"producto punto= "<<v_s.pr_punto(v_a,v_b)<<"\n";
} 
#ifndef VECTOR
#define VECTOR
#include<string>
using namespace std;
class Vector
{
private:
    /* data */
    float x,y,z;
public:
    Vector(float x,float y,float z);
    ~Vector();
    //methods
    Vector suma(Vector v_a,Vector v_b);
    Vector resta(Vector v_a,Vector v_b);
    float pr_punto(Vector v_a,Vector v_b);
    string obtener_vector();
    //getters
    float get_x();
    float get_y();
    float get_z();
};

Vector Vector::suma(Vector v_a,Vector v_b){
    float s_x,s_y,s_z;
    s_x=v_a.get_x() + v_b.get_x();
    s_y=v_a.get_y() + v_b.get_y();
    s_z=v_a.get_z() + v_b.get_z();
    return Vector(s_x,s_y,s_z);
}

Vector Vector::resta(Vector v_a,Vector v_b){
    float r_x,r_y,r_z;
    r_x=v_a.get_x() - v_b.get_x();
    r_y=v_a.get_y() - v_b.get_y();
    r_z=v_a.get_z() - v_b.get_z();
    return Vector(r_x,r_y,r_z);
} 

float Vector::pr_punto(Vector v_a,Vector v_b){
    float p_x,p_y,p_z;
    p_x=v_a.get_x() * v_b.get_x();
    p_y=v_a.get_y() * v_b.get_y();
    p_z=v_a.get_z() * v_b.get_z();
    float pr_p=p_x+p_y+p_z;
    return pr_p;
}

string Vector::obtener_vector(){
    int a=x,b=y,c=z;
    string v="<"+to_string(a)+","+to_string(b)+","+to_string(c)+">";
    return v;
}

Vector::Vector(float x,float y,float z){
    this->x=x;
    this->y=y;
    this->z=z;
}

Vector::~Vector(){
}

float Vector::get_x(){
    return x;
}
float Vector::get_y(){
    return y;
}
float Vector::get_z(){
    return z;
}

#endif
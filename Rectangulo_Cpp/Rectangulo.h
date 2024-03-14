#ifndef RECTANGULO
#define RECTANGULO


class Rectangulo
{
private:
    /* data */
    //atributos
    double base,altura;
    double area,perimetro;
public:
    //constructores
    Rectangulo(double base, double altura);
    ~Rectangulo();

    //metodos
    double calcular_area();
    double calcular_perimetro();
    
};

double Rectangulo::calcular_area(){
    double area=base*altura;
    return area;
}

double Rectangulo::calcular_perimetro(){
    double perimetro=(base*2) + (altura*2);
    return perimetro;
}

Rectangulo::Rectangulo(double base, double altura){
    this->base=base;
    this->altura=altura;
}

Rectangulo::~Rectangulo()
{
}

#endif
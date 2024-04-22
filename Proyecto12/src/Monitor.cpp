#include "Monitor.h"

Monitor::Monitor()
{
    tipo="Sin asignar";
    color="Blanco";
    tam=16;
}

Monitor::Monitor(string _tipo, string _color, int _tam)
{
    tipo=_tipo;
    color=_color;
    tam=_tam;
}

Monitor::~Monitor()
{
    cout<<"Liberando espacio de la clase base 1"<<endl;
}

void Monitor::muestra_monitor()
{
    cout<<"Tipo: "<<tipo<<"\t";
    cout<<"Color: "<<color<<"\t";
    cout<<"Tamaño: "<<tam<<"\t";
}


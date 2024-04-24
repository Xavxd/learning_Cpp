#include "../include/Monitor.h"

Monitor::Monitor()
{
    type="Sin asignar";
    color="Blanco";
    size=16;
}

Monitor::Monitor(string type, string color, int size)
{
    this->type=type;
    this->color=color;
    this->size=size;
}

Monitor::~Monitor(){}

int Monitor:: getSize() {
    return size;
}

void Monitor:: setSize(int size) {
 this->size = size;
}

string Monitor:: getColor() {
return color;
}

void Monitor:: setColor(string color) {
 this->color = color;
}

string Monitor:: getType() {
return type;
}

void Monitor:: setType(string type) {
this->type = type;
}



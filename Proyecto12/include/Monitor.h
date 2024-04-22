#ifndef MONITOR_H
#define MONITOR_H
#include <iostream>
using namespace std;

//clase base 1
class Monitor
{
    public:
        Monitor();
        Monitor(string,string,int);
        ~Monitor();
        void muestra_monitor();

    protected:
        string tipo,color;
        int tam;

    private:
};

#endif // MONITOR_H

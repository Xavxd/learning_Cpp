#ifndef MONITOR_H
#define MONITOR_H
#include <iostream>
using std::string;

//clase base 1
class Monitor
{
    private:
        string type,color;
        int size;
    public:
        Monitor();
        Monitor(string type, string color, int size);
        ~Monitor();
        
        string muestra_monitor();

        int getSize();
        void setSize(int size);

        string getColor();
        void setColor(string color);

        string getType();
        void setType(string type);
};

#endif // MONITOR_H
#ifndef CIUDAD_H
#define CIUDAD_H
#include "lugar.h"

class Ciudad: public Lugar{
private:
    int habitantes=0;
public:
    Ciudad(char *,int);
    void setHabitantes(int h);
    int cantidadPoblacion();
};

#endif // CIUDAD_H

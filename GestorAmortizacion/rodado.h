#ifndef RODADO_H
#define RODADO_H
#include "bien.h"
#include <iostream>

class Rodado : public Bien{
protected:
    int km=0;
public:
    Rodado();
    void setKm(int _km);
    double amortizar();

};


#endif // RODADO_H

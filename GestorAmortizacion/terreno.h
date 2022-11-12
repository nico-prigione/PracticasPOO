#ifndef TERRENO_H
#define TERRENO_H
#include "bien.h"
#include <iostream>

class Terreno : public Bien{
public:
    Terreno();
    double amortizar();

};

#endif // TERRENO_H

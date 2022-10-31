#ifndef SIMPLE_H
#define SIMPLE_H
#include "plato.h"

class Simple : public Plato
{



public:
    Simple();
    Simple(char*, float);
    float calcularPrecio();
};

#endif // SIMPLE_H

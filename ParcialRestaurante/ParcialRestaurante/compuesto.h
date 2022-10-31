#ifndef COMPUESTO_H
#define COMPUESTO_H

#include "simple.h"

class Compuesto : public Plato
{
public:
    std::vector<Plato*> vecPlato;

    Compuesto();
    Compuesto(char*, float = 0);
    float calcularPrecio();
    void agregarPlato(Plato*);

};

#endif // COMPUESTO_H

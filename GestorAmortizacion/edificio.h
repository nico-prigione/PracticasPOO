#ifndef EDIFICIO_H
#define EDIFICIO_H
#include "bien.h"

class Edificio : public Bien{
protected:
    int anio=1900;
    int pisos=1;
public:
    Edificio();
    void setAnio(int _anio);
    void setPisos(int _pisos);
    double amortizar();

};

#endif // EDIFICIO_H

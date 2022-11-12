#ifndef MUEBLE_H
#define MUEBLE_H
#include "bien.h"

class Mueble : public Bien{
protected:
    int anio=1900;
public:
    Mueble();
    double amortizar();
    void setAnio(int _anio);
};


#endif // MUEBLE_H

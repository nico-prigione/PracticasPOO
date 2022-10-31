#ifndef NACIONAL_H
#define NACIONAL_H
#include "producto.h"

class nacional:public producto
{

public:
    nacional();
    nacional(char*,char*,float);
    void actualizarPrecio();
    char getTipo();
};

#endif // NACIONAL_H

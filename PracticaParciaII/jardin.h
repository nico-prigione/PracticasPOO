#ifndef JARDIN_H
#define JARDIN_H
#include "producto.h"

class jardin:public producto
{
public:
    jardin();
    jardin(char*,char*,float);
    void actualizarPrecio();
    char getTipo();
};

#endif // JARDIN_H

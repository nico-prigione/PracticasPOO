#include "nacional.h"

nacional::nacional()
{

}

nacional::nacional(char *nombre, char *cod, float precio):producto(nombre,cod,precio)
{

}

void nacional::actualizarPrecio()
{
    this->precio=this->precio+this->precio*0.02;
}

char nacional::getTipo()
{
    return 'N';
}

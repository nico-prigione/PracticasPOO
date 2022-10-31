#include "jardin.h"

jardin::jardin()
{

}

jardin::jardin(char *nombre, char *cod, float precio):producto(nombre,cod,precio)
{

}

void jardin::actualizarPrecio()
{
    this->precio=this->precio + this->precio*(0.10/12);
}

char jardin::getTipo()
{
 return 'J';
}

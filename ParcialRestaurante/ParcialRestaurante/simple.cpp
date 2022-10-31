#include "simple.h"

Simple::Simple()
{

}

Simple::Simple(char * nombre, float precio)
{
    this->nombrePlato = nombre;
    this->precio = precio;
}

float Simple::calcularPrecio()
{
    return this->precio;
}

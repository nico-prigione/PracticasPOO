#include "producto.h"
#include <string.h>


char *producto::getNombre() const
{
    return nombre;
}

void producto::setNombre(char *newNombre)
{
    nombre = newNombre;
}

char *producto::getCod() const
{
    return cod;
}

void producto::setCod(char *newCod)
{
    cod = newCod;
}

float producto::getPrecio() const
{
    return precio;
}

void producto::setPrecio(float newPrecio)
{
    precio = newPrecio;
}

producto::producto()
{

}

producto::producto(char *nombre, char * cod, float precio)
{
    this->nombre=nombre;
    this->cod=cod;
    this->precio=precio;
}

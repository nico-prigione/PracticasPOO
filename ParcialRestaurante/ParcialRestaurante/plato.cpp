#include "plato.h"

char *Plato::getNombrePlato() const
{
    return nombrePlato;
}

void Plato::setNombrePlato(char *newNombrePlato)
{
    nombrePlato = newNombrePlato;
}

float Plato::getPrecio() const
{
    return precio;
}

void Plato::setPrecio(float newPrecio)
{
    precio = newPrecio;
}

Plato::Plato()
{

}

Plato::Plato(char* nombre, float precio)
{
    this->nombrePlato = nombre;
    this->precio = precio;

}


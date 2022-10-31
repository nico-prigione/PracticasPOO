#include "compuesto.h"

Compuesto::Compuesto()
{

}

Compuesto::Compuesto(char *nombre, float precio)
{
    this->nombrePlato = nombre;
    this->precio = precio;
}

float Compuesto::calcularPrecio()
{
    float acum = 0;
    for(auto vec:this->vecPlato){
        acum += vec->calcularPrecio();
    }
    this->setPrecio(acum);
    return acum;
}

void Compuesto::agregarPlato(Plato *p1)
{
    this->vecPlato.push_back(p1);
}

#include "importado.h"

float importado::getPorcentajeDolar() const
{
    return PorcentajeDolar;
}

void importado::setPorcentajeDolar(float newPorcentajeDolar)
{
    PorcentajeDolar = newPorcentajeDolar;
}

importado::importado()
{

}

importado::importado(char *nombre, char *cod, float precio):producto(nombre,cod,precio)
{

}

void importado::actualizarPrecio()
{
    this->precio=this->precio + this->precio*(PorcentajeDolar/100);
}

char importado::getTipo()
{
    return 'I';
}

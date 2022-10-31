#ifndef PLATO_H
#define PLATO_H

#include <vector>


class Plato
{

protected:

    char* nombrePlato;
    float precio;





public:
    Plato();
    Plato(char*, float = 0);
    float virtual calcularPrecio() = 0;


    char *getNombrePlato() const;
    void setNombrePlato(char *newNombrePlato);
    float getPrecio() const;
    void setPrecio(float newPrecio);
};

#endif // PLATO_H

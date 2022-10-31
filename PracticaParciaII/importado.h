#ifndef IMPORTADO_H
#define IMPORTADO_H
#include "producto.h"

class importado:public producto
{
protected:
    float PorcentajeDolar;
public:
    importado();
    importado(char*,char*,float);
    void actualizarPrecio();
    char getTipo();
    float getPorcentajeDolar() const;
    void setPorcentajeDolar(float newPorcentajeDolar);
};

#endif // IMPORTADO_H

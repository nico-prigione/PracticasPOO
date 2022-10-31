#ifndef EMPRESA_H
#define EMPRESA_H
#include "producto.h"
#include <vector>
#include <fstream>



class empresa
{
protected:
    std::vector<producto*>prods;
    float varDolar;
public:
    empresa();
    void leerArchivo();
    void escribirArchivo();
    void listado();
    void cantidadPorMarca();
    void escArchivoEje();
    float getVarDolar() const;
    void setVarDolar(float newVarDolar);
};

#endif // EMPRESA_H

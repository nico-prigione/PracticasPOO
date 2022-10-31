#ifndef RESTAURANTE_H
#define RESTAURANTE_H
#include "plato.h"
#include <algorithm>
#include <fstream>

class Restaurante
{

private:
    std::vector<Plato*> vecPlatos;

public:
    Restaurante();
    void agregarPlato(Plato*);
    void setearPrecios();
    void odenarVecyEscibirTxt();
};

#endif // RESTAURANTE_H

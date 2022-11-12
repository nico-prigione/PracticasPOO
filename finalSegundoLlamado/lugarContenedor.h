#ifndef LUGARCONTENEDOR_H
#define LUGARCONTENEDOR_H
#include "lugar.h"
#include "ciudad.h"
#include <vector>

using namespace std;

class LugarContenedor: public Lugar{
private:
    vector  <Lugar>  lugares;
    int cantidad=0;
    int cantidadMax=0;
public:
    LugarContenedor(char *,int);
    int cantidadPoblacion();
    void add(Lugar* l);
    void addC(Ciudad* C);

};


#endif // LUGARCONTENEDOR_H

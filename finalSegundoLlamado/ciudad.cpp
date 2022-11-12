#include "ciudad.h"
#include "lugar.h"

Ciudad::Ciudad(char * n, int h):Lugar(nombre){
    this->habitantes=h;
}
void Ciudad::setHabitantes(int h){
    this->habitantes=h;
}
int Ciudad::cantidadPoblacion(){
    return this->habitantes;
}

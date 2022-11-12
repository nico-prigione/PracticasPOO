#include "edificio.h"

Edificio::Edificio(){
}

void Edificio::setAnio(int _anio){
    this->anio=_anio;
}
void Edificio::setPisos(int _pisos){
    this->pisos=_pisos;
}
double Edificio::amortizar(){
    int dif=2021-this->anio;
    return this->valor * (dif*0,004*this->pisos);
}

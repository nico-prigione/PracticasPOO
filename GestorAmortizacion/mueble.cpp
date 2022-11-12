#include "mueble.h"

Mueble::Mueble(){

}
double Mueble::amortizar(){
    int dif = 2021 - this->anio;
    return this->valor * (dif * 0.05);
}
void Mueble::setAnio(int _anio){
    this->anio=_anio;
}

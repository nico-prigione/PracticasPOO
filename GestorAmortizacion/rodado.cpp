#include "rodado.h"

Rodado::Rodado(){

}
void Rodado::setKm(int _km){
    this->km=_km;
}
double Rodado::amortizar(){
    int dist=this->km/1000;
    return this->valor * ((0.1)*dist);
}

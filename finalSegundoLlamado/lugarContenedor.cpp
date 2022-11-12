#include "lugar.h"
#include "ciudad.h"
#include "lugarContenedor.h"
#include <iostream>

#include <vector>

using namespace std;


LugarContenedor::LugarContenedor(char * n,int c):Lugar(nombre){
this->cantidadMax=c;
}

void LugarContenedor::add(Lugar* l){
    if(this->cantidad < this->cantidadMax){
        lugares.push_back(*l);
    }
}
void LugarContenedor::addC(Ciudad* C){
    if(this->cantidad < this->cantidadMax){
        lugares.push_back(*C);
    }
}
int LugarContenedor::cantidadPoblacion(){
    int acu=this->lugares[0].cantidadPoblacion();
    cout<<lugares[0].cantidadPoblacion();
    for(int i=1;i<2;i++){
        acu=acu + this->lugares[i].cantidadPoblacion();
    }
        return acu;
}



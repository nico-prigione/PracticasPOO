#include <iostream>
#include <vector>
#include "lugar.h"
#include "ciudad.h"
#include "lugarContenedor.h"
#include "lugar.cpp"
#include "ciudad.cpp"
#include "lugarContenedor.cpp"

using namespace std;



int main()
{
    int cant;
    Ciudad * pna=new Ciudad("parana",350000);
    Ciudad * orv=new Ciudad("oro verde",20000);
    //cant=orv->cantidadPoblacion();
    //cout<<cant;

    LugarContenedor * PNA = new LugarContenedor("PARANA",30);
    PNA->addC(pna);
    PNA->addC(orv);
    cant=PNA->cantidadPoblacion();
    cout<<"cantidad de poblacion en el departamento de PPARANA"<<cant<<endl;

    LugarContenedor * ER = new LugarContenedor("ENTRE RIOS",30);
    ER->add(PNA);
    LugarContenedor * ARG=new LugarContenedor("ARGENTINA",44000000);



    return 0;
}

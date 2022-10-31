#include <iostream>
#include "compuesto.h"
#include "plato.h"
#include "restaurante.h"
#include "simple.h"

using namespace std;

int main()
{
    Plato* harina = new Simple("Harina",150.f);
    Plato* dulceLeche = new Simple("DulceCotapa",150);



    Compuesto masaPanqueque("Panqueque");
    masaPanqueque.agregarPlato(harina);
    masaPanqueque.agregarPlato(dulceLeche);

    Plato* panqueque = &masaPanqueque;

    Restaurante gestor;
    gestor.agregarPlato(panqueque);




    //PRIMERO LO HAGO COMPUESTO Y DSP LO UPCASTEO A PLATO
    Compuesto panquequeCondulce("Panqueque con DulceLeche");
    panquequeCondulce.agregarPlato(panqueque);
    panquequeCondulce.agregarPlato(dulceLeche);

    Plato* panquequeTerminado = &panquequeCondulce;
    gestor.agregarPlato(panquequeTerminado);







    gestor.setearPrecios();
    gestor.odenarVecyEscibirTxt();


    return 0;
}

#include "restaurante.h"

Restaurante::Restaurante()
{

}

void Restaurante::agregarPlato(Plato *p)
{
    this->vecPlatos.push_back(p);
}

void Restaurante::setearPrecios()
{
    for(auto vec : this->vecPlatos){
        vec->calcularPrecio();
    }
}

void Restaurante::odenarVecyEscibirTxt()
{
    sort(this->vecPlatos.begin(),this->vecPlatos.end(),[](Plato* p1, Plato* p2){return p1->getPrecio() < p2->getPrecio() ;});

    std::fstream archi("platos.txt",std::ios::out);

    for(auto vec : this->vecPlatos){
        archi<<vec->getNombrePlato()<<" "<<vec->getPrecio()<<"\n";
    }

    archi.close();
}

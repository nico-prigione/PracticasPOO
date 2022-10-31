#include "empresa.h"
#include <cstring>
#include <iostream>
#include <fstream>
#include "nacional.h"
#include "importado.h"
#include "jardin.h"
#include "algorithm"
#include <map>
using namespace std;

bool compararCodigo(producto *p1,producto *p2){
    return strcmp(p1->getCod(),p2->getCod())==-1;
}

float empresa::getVarDolar() const
{
    return varDolar;
}

void empresa::setVarDolar(float newVarDolar)
{
    varDolar = newVarDolar;
}

empresa::empresa()
{

}

void empresa::leerArchivo()
{

    std::ifstream archivo("productos.dat",std::ios::binary);//lee archivo
    if(archivo.is_open()){
        descProd prod;
        while(archivo.read((char*)&prod,sizeof(descProd))){
            switch(prod.tipo) {
            case 'N':
                this->prods.push_back(new nacional(prod.nombre,prod.marca,prod.precio));
                    break;
            case 'I':
                this->prods.push_back(new importado(prod.nombre,prod.marca,prod.precio));
                    break;
            case 'J':
                this->prods.push_back(new jardin(prod.nombre,prod.marca,prod.precio));
                    break;
            default:
                break;
            }
        }
    }
    archivo.close();
}

void empresa::escribirArchivo()
{
    std::ofstream archivo("actualizarArchivo.dat",std::ios::binary);
    for(int i=0;i<this->prods.size();i++){
        producto * prod =this->prods[i];
        prod->actualizarPrecio();
        descProd record;
        strcpy(record.nombre,prod->getNombre());
    }
}

void empresa::listado()
{
    ofstream archi("lista.dat");
    sort(this->prods.begin(), this->prods.end(), compararCodigo);
    for (int i = 0; i<this->prods.size(); i++) {
       archi << this->prods[i]->getCod() << " ... $ " << this->prods[i]->getPrecio() << endl;
       }
    archi.close();
}

void empresa::cantidadPorMarca()
{
    map<string, int> prodsXMarca;
        string marca;
        for (int i = 0; i<this->prods.size(); i++) {
            marca =this->prods[i]->getNombre();
            prodsXMarca[marca] += 1;
        }
        for (auto it = prodsXMarca.begin(); it != prodsXMarca.end(); ++it) {
            cout <<  it->first << "  " << it->second<<endl;
        }

}
void empresa::escArchivoEje()
{
    ofstream archi("productos.dat", ios::binary);

    descProd record;
    strcpy(record.nombre, "REMERA MANGAS CORTA");
    strcpy(record.marca, "NARROW");
    record.precio = 100;
    record.tipo = 'N';
    archi.write((char *)&record, sizeof(record));

    strcpy(record.nombre, "SACO AMBO");
    strcpy(record.marca, "LEGACY");
    record.precio = 560;
    record.tipo = 'N';
    archi.write((char *)&record, sizeof(record));

    strcpy(record.nombre, "SHORT BAÑO");
    strcpy(record.marca, "PINGUIN");
    record.precio = 100;
    record.tipo = 'I';
    archi.write((char *)&record, sizeof(record));

    strcpy(record.nombre, "TIERRA ABONADA");
    strcpy(record.marca, "GILGEROS");
    record.precio = 100;
    record.tipo = 'J';
    archi.write((char *)&record, sizeof(record));

    archi.close();
}


#include <iostream>
#include "empresa.h"

using namespace std;

int main()
{
   empresa empresas;
   empresas.setVarDolar(35.0f);
   empresas.escArchivoEje();
   empresas.escribirArchivo();
   empresas.leerArchivo();
   empresas.listado();
   empresas.cantidadPorMarca();
   return 0;
}

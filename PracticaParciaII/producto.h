#ifndef PRODUCTO_H
#define PRODUCTO_H

struct descProd{
    char nombre[20];
    char marca[20];
    char tipo;
    float precio;
};

class producto
{
protected:
    char*nombre;
    char*cod;
    float precio;
public:
    producto();
    producto(char*,char*,float);
    void virtual actualizarPrecio()=0;
    virtual char getTipo()=0;
    char *getNombre() const;
    void setNombre(char *newNombre);
    char *getCod() const;
    void setCod(char *newCod);
    float getPrecio() const;
    void setPrecio(float newPrecio);
};

#endif // PRODUCTO_H

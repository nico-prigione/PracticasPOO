#ifndef LUGAR_H
#define LUGAR_H


class Lugar{
protected:
    char *nombre;
public:
    Lugar(char *);
    virtual int cantidadPoblacion();
};


#endif // LUGAR_H

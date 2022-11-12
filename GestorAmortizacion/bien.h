#ifndef BIEN_H
#define BIEN_H

class Bien{
protected:
    double valor=0.0;
public:
    Bien();
    double virtual amortizar()=0;
    void setValor(double _valor);



};

#endif // BIEN_H

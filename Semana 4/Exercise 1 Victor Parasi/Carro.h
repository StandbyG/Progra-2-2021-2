#pragma once
#include <iostream>
using namespace std;
using namespace System;
class Carro
{
private:
    int x, y, w, h, dx;
    bool eliminar;
public:
    Carro();
    ~Carro();
    void Borrar();
    void Imprimir();
    void Mover(int Wventana, int Hventana);
    bool retornar_eliminar();
    int retonar_x();
    int retonar_y();
    int retonar_w();
    int retonar_h();

};


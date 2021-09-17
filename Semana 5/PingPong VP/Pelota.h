#pragma once
#include <iostream>
using namespace std;
using namespace System;
class Pelota
{
private:
    int x, y, w, h, dx,dy;
    bool choco_en_borde;
public:
    Pelota();
    ~Pelota();
    void Borrar();
    void Imprimir();
    void Mover(int Wventana, int Hventana);
    int retornar_x();
    int retornar_y();
    int retornar_dx();
    int retornar_dy();
    void cambiar_dx(int nuevo);
    void cambiar_dy(int nuevo);
    int retornar_w();
    int retornar_h();
    bool retornar_choco_en_borde();
};


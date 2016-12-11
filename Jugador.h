#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

class Jugador : public Persona{
  private:
    int numero_camiseta;
    double nivel;

  public:
    Jugador();
    Jugador(string, int, double);
    int getNumero_camiseta();
    double getNivel();
    void setNumero_camiseta(int);
    void setNivel(double);
    virtual double ValorEnELMercado();
    ~Jugador();


};

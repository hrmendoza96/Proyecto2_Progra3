#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

class Jugador : public Persona{
  private:
    int numero_camiseta;
    string posicion;
    double nivel;

  public:
    Jugador();
    Jugador(string, string, int, double, int, string, double);
    int getNumero_camiseta();
    string getPosicion();
    double getNivel();
    void setNumero_camiseta(int);
    void setPosicion(string);
    void setNivel(double);
    virtual double DeduccionImpuestos(); //?
    virtual double ValorEnELMercado();
    ~Jugador();


};

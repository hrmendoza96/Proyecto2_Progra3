#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

class Entrenador : public Persona{
  private:
    int numero_Titulos;

  public:
    Entrenador();
    Entrenador(string, int);
    int getNumero_Titulos();
    void setNumero_Titulos(int);
    virtual double ValorEnELMercado();
    ~Entrenador();


};

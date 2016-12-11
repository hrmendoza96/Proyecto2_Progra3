#pragma once
#include <iostream>
#include <string>
using namespace std;

class Persona{
  protected:
    string nombre;

  public:
    Persona();
    Persona(string);
    void setNombre(string);
    string getNombre();
    string toString();
    virtual double ValorEnELMercado()=0;

    ~Persona(); //TODO: Hacer Virtual?
};

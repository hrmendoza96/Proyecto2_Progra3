#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

class Asistente : public Persona{
  private:
    bool titulo;//universitario

  public:
    Asistente();
    Asistente(string, string, int, double, bool);
    bool getTitulo();
    void setTitulo(bool);
    virtual double DeduccionImpuestos(); //?
    virtual double ValorEnELMercado();
    ~Asistente();


};

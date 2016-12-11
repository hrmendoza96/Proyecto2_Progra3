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
    Asistente(string,bool);
    bool getTitulo();
    void setTitulo(bool);
    virtual double ValorEnELMercado();
    ~Asistente();


};

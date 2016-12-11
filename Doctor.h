#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

class Doctor : public Persona{
  private:
    bool especialidad;

  public:
    Doctor();
    Doctor(string, bool);
    bool getEspecialidad();
    void setEspecialidad(bool);
    virtual double ValorEnELMercado();
    ~Doctor();


};

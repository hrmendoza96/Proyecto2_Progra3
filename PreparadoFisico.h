#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

class PreparadorFisico : public Persona{
  private:
    int Anos_Experiencia;

  public:
    PreparadorFisico();
    PreparadorFisico(string, string, int, double, int);
    int getAnosExperiencia();
    void setAnosExperiencia(int);
    virtual double DeduccionImpuestos(); //?
    virtual double ValorEnELMercado();
    ~PreparadorFisico();


};

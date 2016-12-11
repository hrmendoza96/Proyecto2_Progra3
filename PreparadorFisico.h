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
    PreparadorFisico(string, int);
    int getAnos_Experiencia();
    void setAnos_Experiencia(int);
    virtual double ValorEnELMercado();
    ~PreparadorFisico();


};

#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

class Entrenador : public Persona{
  private:
    int numero_Titulos;
    int Ano_InicioLicencia;
    int Ano_VenceLicencia;

  public:
    Entrenador();
    Entrenador(string, string, int, double, int, int, int);
    int getNumero_Titulos();
    string getAno_InicioLicencia();
    string getAno_VenceLicencia();
    void setNumero_Titulos(int);
    void setAno_InicioLicencia(int);
    void setAno_VenceLicencia(int);
    virtual double DeduccionImpuestos(); //?
    virtual double ValorEnELMercado();
    ~Entrenador();


};

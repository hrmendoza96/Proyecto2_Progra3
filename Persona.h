#pragma once
#include <iostream>
#include <string>
using namespace std;

class Persona{
  protected:
    string nombre;
    string nacionalidad;
    int edad;
    double salario;

  public:
    Persona();
    Persona(string, string, int, double);
    void setNombre(string);
    void setNacionalidad(string);
    void setEdad(int);
    void setSalario(double);
    string getNombre();
    string getNacionalidad();
    int getEdad();
    double getSalario();
    string toString();
    virtual double DeduccionImpuestos()=0;
    virtual double ValorEnELMercado()=0;

    ~Persona(); //TODO: Hacer Virtual?
};

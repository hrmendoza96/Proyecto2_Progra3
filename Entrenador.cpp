#include <iostream>
#include <string>
#include <sstream>
#include "Persona.h"
#include "Entrenador.h"
using namespace std;



Entrenador::Entrenador(){

}
Entrenador::Entrenador(string nombre, string nacionalidad, int edad, double salario,
   int numero_Titulos, int Ano_InicioLicencia, int Ano_VenceLicencia)
   :Persona(nombre,  nacionalidad, edad, salario ){
     this->numero_Titulos=numero_Titulos;
     this->Ano_InicioLicencia=Ano_InicioLicencia;
     this->Ano_VenceLicencia=Ano_VenceLicencia;

}
int Entrenador::getNumero_Titulos(){
  return numero_Titulos;
}
int Entrenador::getAno_InicioLicencia(){
  return Ano_InicioLicencia;
}
int Entrenador::getAno_VenceLicencia(){
  return Ano_VenceLicencia;
}
void Entrenador::setNumero_Titulos(int numero_Titulos){
  this->numero_Titulos=numero_Titulos;

}
void Entrenador::setAno_InicioLicencia(int Ano_InicioLicencia){
  this->Ano_InicioLicencia=Ano_InicioLicencia;
}
void Entrenador::setFecha_VenceLicencia(int Ano_VenceLicencia){
  this->Ano_VenceLicencia=Ano_VenceLicencia;
}
double Entrenador::DeduccionImpuestos(){

}
double Entrenador::ValorEnELMercado(){
  double valor=0;
  valor =( (Ano_VenceLicencia)-(Ano_InicioLicencia) )*1000;
  return valor;

}
Entrenador::~Entrenador(){

}

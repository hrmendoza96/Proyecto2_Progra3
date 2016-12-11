#include <iostream>
#include <string>
#include <sstream>
#include "Persona.h"
#include "Entrenador.h"
using namespace std;



Entrenador::Entrenador(){

}
Entrenador::Entrenador(string nombre,
   int numero_Titulos)
   :Persona(nombre){
     this->numero_Titulos=numero_Titulos;

}
int Entrenador::getNumero_Titulos(){
  return numero_Titulos;
}
void Entrenador::setNumero_Titulos(int numero_Titulos){
  this->numero_Titulos=numero_Titulos;
}
double Entrenador::ValorEnELMercado(){
  double valor=0;
  valor =numero_Titulos*1000;
  return valor;

}
Entrenador::~Entrenador(){

}

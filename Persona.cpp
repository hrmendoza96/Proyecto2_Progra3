#include <iostream>
#include <string>
#include <sstream>
#include "Persona.h"
using namespace std;

Persona::Persona(){

}
Persona::Persona(string nombre){
  this->nombre=nombre;
}
void Persona::setNombre(string nombre){
  this->nombre=nombre;

}
string Persona::Persona::getNombre(){
  return nombre;

}
string Persona::toString(){
  stringstream ss;
  ss << nombre << "\n";
  return ss.str();

}
double Persona::ValorEnELMercado(){
  return 0;
}

Persona::~Persona(){

}

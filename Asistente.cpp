#include <iostream>
#include <string>
#include <sstream>
#include "Persona.h"
#include "Asistente.h"
using namespace std;


Asistente::Asistente(){

}
Asistente::Asistente(string nombre, string nacionalidad, int edad, double salario,
  bool titulo):Persona(nombre, nacionalidad,edad,salario ){
  this->titulo=titulo;
}
bool Asistente::getTitulo(){
  return titulo;
}
void Asistente::setTitulo(bool titulo){
  this->titulo=titulo;
}
double Asistente::DeduccionImpuestos(){

}
double Asistente::ValorEnELMercado(){
  if(titulo==true){
      return 1000;
  }else{
      return 500;
  }

}
Asistente::~Asistente(){

}

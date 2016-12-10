#include <iostream>
#include <string>
#include <sstream>
#include "Persona.h"
using namespace std;

Persona::Persona(){

}
Persona::Persona(string nombre, string nacionalidad, int edad, double salario){
  this->nombre=nombre;
  this-> nacionalidad=nacionalidad;
  this-> edad=edad;
  this-> salario=salario;

}
void Persona::setNombre(string nombre){
  this->nombre=nombre;

}
void Persona::setNacionalidad(string nacionalidad){
  this-> nacionalidad=nacionalidad;

}
void Persona::setEdad(int edad){
  this-> edad=edad;

}
void Persona::setSalario(double salario){
  this-> salario=salario;
}
string Persona::Persona::getNombre(){
  return nombre;

}
string Persona::getNacionalidad(){
  return nacionalidad;

}
int Persona::getEdad(){
  return edad;

}
double Persona::getSalario(){
  return salario;

}
string Persona::toString(){
  stringstream ss;
  ss << nombre << "\n";
  return ss.str();

}
double Persona::DeduccionImpuestos(){
  return 0;

}
double Persona::ValorEnELMercado(){
  return 0;
}

Persona::~Persona(){

}

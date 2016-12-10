#include <iostream>
#include <string>
#include <sstream>
#include "Persona.h"
#include "Doctor.h"
using namespace std;


Doctor::Doctor(){

}
Doctor::Doctor(string nombre, string nacionalidad, int edad, double salario,
  bool especialidad):Persona(nombre, nacionalidad,edad,salario ){
  this->especialidad=especialidad;
}
bool Doctor::getEspecialidad(){
  return especialidad;
}
void Doctor::setEspecialidad(bool especialidad){
  this->especialidad=especialidad;
}
double Doctor::DeduccionImpuestos(){

}
double Doctor::ValorEnELMercado(){
  if(especialidad==true){
      return 3000;
  }else{
    return 1000;
  }

}
Doctor::~Doctor(){

}

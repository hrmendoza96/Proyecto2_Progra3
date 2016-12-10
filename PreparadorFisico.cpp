#include <iostream>
#include <string>
#include <sstream>
#include "Persona.h"
#include "PreparadorFisico.h"
using namespace std;


PreparadorFisico::PreparadorFisico(){

}
PreparadorFisico::PreparadorFisico(string nombre, string nacionalidad, int edad, double salario,
  int Anos_Experiencia):Persona(nombre, nacionalidad,edad,salario ){
  this->Anos_Experiencia=Anos_Experiencia;
}
int PreparadorFisico::getAnos_Experiencia(){
  return Anos_Experiencia;
}
void PreparadorFisico::setAnos_Experiencia(int Anos_Experiencia){
  this->Anos_Experiencia=Anos_Experiencia;
}
double PreparadorFisico::DeduccionImpuestos(){

}
double PreparadorFisico::ValorEnELMercado(){
  return Anos_Experiencia*10;

}
PreparadorFisico::~PreparadorFisico(){

}

#include <iostream>
#include <string>
#include "Persona.h"
#include "Entrenador.h"
#include "Doctor.h"
#include "Asistente.h"
#include "PreparadorFisico.h"
#include "CuerpoTecnico.h"

using namespace std;


CuerpoTecnico::CuerpoTecnico(Persona* entrenador, Persona* doctor, Persona* asistente, Persona* preparadorFisico){
  this->entrenador=entrenador;
  this->doctor=doctor;
  this->asistente=asistente;
  this->preparadorFisico=preparadorFisico;
}
CuerpoTecnico::CuerpoTecnico(){

}
void CuerpoTecnico::setEntrenador(Persona* entrenador){
  this->entrenador=entrenador;

}
void CuerpoTecnico::setDoctor(Persona* doctor){
  this->doctor=doctor;

}
void CuerpoTecnico::setAsistente(Persona* asistente){
  this->asistente=asistente;

}
void CuerpoTecnico::setPreparadorFisico(Persona* preparadorFisico){
  this->preparadorFisico=preparadorFisico;
}
Persona* CuerpoTecnico::getEntrenador(){
  return entrenador;
}
Persona* CuerpoTecnico::getDoctor(){
   return doctor;
}
Persona* CuerpoTecnico::getPreparadorFisico(){
   return preparadorFisico;
}
Persona* CuerpoTecnico::getAsistente(){
  return asistente;
}

CuerpoTecnico::~CuerpoTecnico(){

}

#include <iostream>
#include <string>
#include "Persona.h"
#include "Entrenador.h"
#include "Doctor.h"
#include "Asistente.h"
#include "PreparadorFisico.h"
#include "Jugador.h"
#include "Equipo.h"
#include "Partido.h"

Partido::Partido(){

}

Partido::Partido(Equipo* local, Equipo*  visita, int golesLocal, int golesVisita){
  this->local=local;
  this->visita=visita;
  this->golesLocal=golesLocal;
  this->golesVisita=golesVisita;

}
Equipo* Partido::getLocal(){
  return local;

}
Equipo* Partido::getVisita(){
  return visita;

}
int Partido::getGolesLocal(){
  return golesLocal;
}
int Partido::getGolesVisita(){
  return golesVisita;
}
void Partido::setGolesLocal(int golesLocal){
  this->golesLocal=golesLocal;
}
void Partido::setGolesVisita(int golesVisita){
  this->golesVisita=golesVisita;
}
void Partido::setLocal(Equipo* local){
  this->local=local;
}
void Partido::setVisita(Equipo* visita){
  this->visita=visita;
}
int Partido::getGanador(){
  if(golesLocal>golesVisita){
    return 1;
  }else if(golesVisita>golesLocal){
    return 2;
  }else{
      return 3;
  }
}
Partido::~Partido(){

}

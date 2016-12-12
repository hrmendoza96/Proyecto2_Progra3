#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "Persona.h"
#include "Entrenador.h"
#include "Doctor.h"
#include "Asistente.h"
#include "PreparadorFisico.h"
#include "Jugador.h"
#include "Equipo.h"

using namespace std;

Equipo::Equipo(string nombreEquipo, CuerpoTecnico* staff){
  this->staff=staff;
  this->nombreEquipo=nombreEquipo;
}
Equipo::Equipo(string nombreEquipo){
  this->nombreEquipo=nombreEquipo;
}
Equipo::Equipo(){

}
void Equipo::setNombreEquipo(string nombreEquipo){
  this->nombreEquipo=nombreEquipo;
}
string Equipo::getNombreEquipo(){
  return nombreEquipo;
}
CuerpoTecnico* Equipo::getStaff(){
  return staff;
}
void Equipo::setStaff(CuerpoTecnico* staff){
  this->staff=staff;
}
void Equipo::setJugador(Jugador* jugador){
  ListaJugadores.push_back(jugador);
}
string Equipo::toString(){
  stringstream ss;
  ss << nombreEquipo << "\n";
  return ss.str();

}

Equipo::~Equipo(){

}

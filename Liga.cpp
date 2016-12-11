#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "Entrenador.h"
#include "Doctor.h"
#include "Asistente.h"
#include "PreparadorFisico.h"
#include "Jugador.h"
#include "Equipo.h"
#include "Partido.h"
#include "Liga.h"



Liga::Liga(string fechaIncio, string fechaFinal){
  this->fechaIncio=fechaIncio;
  this->fechaFinal=fechaFinal;
}
Liga::Liga(){

}
string Liga::getFechaInicio(){
  return fechaIncio;

}
string Liga::getFechaFinal(){
  return fechaFinal;

}
Equipo* Liga::getCampeon(){
  return campeon;

}
Partido* Liga::getPartido(int indice){
  return ListaPartidos.at(indice);
}
void Liga::setFechaInicio(string fechaIncio){
  this->fechaIncio=fechaIncio;

}
void Liga::setFechaFinal(string fechaFinal){
  this->fechaFinal=fechaFinal;

}
void Liga::setCampeon(Equipo* campeon){
  this->campeon=campeon;
}
void Liga::setPartido(Partido* partido){
  ListaPartidos.push_back(partido);
}
int Liga::getTorneoSize(){
  return ListaPartidos.size();
}

Liga::~Liga(){

}

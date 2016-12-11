#include <iostream>
#include <string>
#include <sstream>
#include "Persona.h"
#include "Jugador.h"
using namespace std;

Jugador::Jugador(){

}
Jugador::Jugador(string nombre, int numero_camiseta, double nivel):Persona(nombre){
  this-> numero_camiseta = numero_camiseta;
  this-> nivel = nivel;

}
int Jugador::getNumero_camiseta(){
  return numero_camiseta;
}
double Jugador::getNivel(){
  return nivel;

}
void Jugador::setNumero_camiseta(int numero_camiseta){
  this-> numero_camiseta = numero_camiseta;

}
void Jugador::setNivel(double nivel){
  this-> nivel = nivel;

}
double Jugador::ValorEnELMercado(){
  return nivel*1000;

}
Jugador::~Jugador(){

}

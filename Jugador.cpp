#include <iostream>
#include <string>
#include <sstream>
#include "Persona.h"
#include "Jugador.h"
using namespace std;

Jugador::Jugador(){

}
Jugador::Jugador(string nombre, string nacionalidad, int edad, double salario, int numero_camiseta, string posicion, double nivel):Persona(nombre,nacionalidad, edad, salario){
  this-> numero_camiseta = numero_camiseta;
  this-> posicion = posicion;
  this-> nivel = nivel;

}
int Jugador::getNumero_camiseta(){
  return numero_camiseta;
}
string Jugador::getPosicion(){
  return posicion;

}
double Jugador::getNivel(){
  return nivel;

}
void Jugador::setNumero_camiseta(int numero_camiseta){
  this-> numero_camiseta = numero_camiseta;

}
void Jugador::setPosicion(string posicion){
  this-> posicion = posicion;

}
void Jugador::setNivel(double nivel){
  this-> nivel = nivel;

}
double Jugador::DeduccionImpuestos(){
  return salario*(0.15);

}
double Jugador::ValorEnELMercado(){
  return nivel*1000;

}
Jugador::~Jugador(){

}

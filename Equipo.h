#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Persona.h"
#include "Entrenador.h"
#include "Doctor.h"
#include "Asistente.h"
#include "CuerpoTecnico.h"
#include "PreparadorFisico.h"
#include "Jugador.h"

using namespace std;

class Equipo{
  private:
    string nombreEquipo;
    vector<Jugador*> ListaJugadores;
    CuerpoTecnico* staff;



  public:
    Equipo(string, CuerpoTecnico*);
    CuerpoTecnico* getStaff();
    void setNombreEquipo(string);
    string getNombreEquipo();
    void setStaff(CuerpoTecnico*);
    void setJugador(Jugador*);
    string toString();
    Equipo();

    ~Equipo(); //TODO: Hacer Virtual?
};

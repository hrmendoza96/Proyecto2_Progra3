#pragma once
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

using namespace std;

class Liga{
  private:
    string fechaIncio;
    string fechaFinal;
    vector<Partido*> ListaPartidos;
    Equipo* campeon;




  public:
    Liga(string, string);
    Liga();
    string getFechaInicio();
    string getFechaFinal();
    Equipo* getCampeon();
    Partido* getPartido(int);
    void setFechaInicio(string);
    void setFechaFinal(string);
    void setCampeon(Equipo*);
    void setPartido(Partido*);
    int getTorneoSize();

    ~Liga(); //TODO: Hacer Virtual?
};

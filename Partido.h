#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
#include "Entrenador.h"
#include "Doctor.h"
#include "Asistente.h"
#include "PreparadorFisico.h"
#include "Jugador.h"
#include "Equipo.h"

using namespace std;

class Partido{
  private:
    Equipo* local;
    Equipo* visita;
    int golesLocal;
    int golesVisita;



  public:
    Partido(Equipo*, Equipo*, int, int);
    Equipo* getLocal();
    Equipo* getVisita();
    int getGolesLocal();
    int getGolesVisita();
    void setGolesLocal(int);
    void setGolesVisita(int);
    void setLocal(Equipo*);
    void setVisita(Equipo*);
    int getGanador();
    Partido();

    ~Partido(); //TODO: Hacer Virtual?
};

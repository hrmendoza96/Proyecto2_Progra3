#pragma once
#include <iostream>
#include <string>
#include "Persona.h"
#include "Entrenador.h"
#include "Doctor.h"
#include "Asistente.h"
#include "PreparadorFisico.h"

using namespace std;

class CuerpoTecnico{
  private:
    Persona* entrenador;
    Persona* doctor;
    Persona* asistente;
    Persona* preparadorFisico;


  public:
    CuerpoTecnico(Persona*, Persona*, Persona*, Persona*);
    CuerpoTecnico();
    void setEntrenador(Persona*);
    void setDoctor(Persona*);
    void setAsistente(Persona*);
    void setPreparadorFisico(Persona*);
    Persona* getEntrenador();
    Persona* getDoctor();
    Persona* getPreparadorFisico();
    Persona* getAsistente();
    ~CuerpoTecnico(); //TODO: Hacer Virtual?
};

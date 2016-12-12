#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include "Persona.h"
#include "Entrenador.h"
#include "Doctor.h"
#include "Asistente.h"
#include "PreparadorFisico.h"
#include "CuerpoTecnico.h"
#include "Jugador.h"
#include "Equipo.h"
#include "Partido.h"
#include "Liga.h"


using namespace std;
void menu();
int conversionATOI(char[]);

int main(int argc, char const *argv[]) {
  initscr();
  raw();
  char opcion = '0';
  vector<Equipo*> ListaEquipos;
  Liga* torneo = new Liga("2016", "2016");
  do{
    menu();
    opcion = getch();
    printw("\n");
    if(opcion=='1'){
      char nombreEquipo[100];
      char cantidad[100];
      char nombreEntrenador[100];
      char nombreDoctor[100];
      char nombreAsistente[100];
      char nombrePreparadorFisico[100];
      char numero_Titulos[100];
      char anosExp[100];
      char especialidad;
      char titulo;
      string nombreEq = "";
      string nombreEntre="";
      string nombreDoc="";
      string nombreAsist="";
      string nombrePrep="";
      int numTituloEnt;
      int Anos_Experiencia;

      printw("Ingrese el nombre del equipo:");
      getstr(nombreEquipo);
      nombreEq = nombreEquipo;

      //Entrenador
      printw("Ingrese el nombre del Entrenador:");
      getstr(nombreEntrenador);
      nombreEntre = nombreEntrenador;
      printw("\n");
      printw("Ingrese la cantidad de titulos que tiene el entrenador:");
      getstr(numero_Titulos);
      numTituloEnt = conversionATOI(numero_Titulos);
      Persona* entrenador = new Entrenador(nombreEntre,numTituloEnt);
      printw("\n");

      //Doctor
      printw("Ingrese el nombre del Doctor:");
      getstr(nombreDoctor);
      nombreDoc = nombreDoctor;
      printw("\n");
      printw("Tiene el doctor especialidad 1) si 2) no :");
      especialidad = getch();
      bool specialty;
      if(especialidad=='1'){
        specialty=true;
      }else{
        specialty=false;
      }
      Persona* doctor = new Doctor(nombreDoc,specialty);
      printw("\n");

      //Asistente
      printw("Ingrese el nombre del Asistente:");
      getstr(nombreAsistente);
      nombreAsist = nombreAsistente;
      printw("\n");
      printw("Tiene titulo el asistente? 1) si 2) no :");
      titulo = getch();
      bool degree;
      if(titulo=='1'){
        degree=true;
      }else{
        degree=false;
      }
      Persona* asistente = new Asistente(nombreAsist,degree);
      printw("\n");

      //PreparadorFisico
      printw("Ingrese el nombre del Preparador Fisico:");
      getstr(nombrePreparadorFisico);
      nombrePrep = nombrePreparadorFisico;
      printw("\n");
      printw("Ingrese la cantidad de Anos de Experiencia que tiene el Preparador Fisico:");
      getstr(anosExp);
      Anos_Experiencia = conversionATOI(anosExp);
      Persona* preparador = new PreparadorFisico(nombrePrep,Anos_Experiencia);
      printw("\n");

      //se crea el CuerpoTecnico
      CuerpoTecnico* staff = new CuerpoTecnico(entrenador, doctor, asistente, preparador);

      //se crea equipo
      Equipo* equipo = new Equipo(nombreEq, staff);


      //Jugadores
      printw("Ingrese la cantidad de jugadores que desea en el equipo:");
      getstr(cantidad);
      int cantidadJugadores = conversionATOI(cantidad);

      for (int i = 0; i < cantidadJugadores; i++) {
        char numero_camiseta[100];
        char nivel[100];
        char nombreJugador[100];
        printw("%d", i+1);
        addch(')');
        printw("\n");
        printw("Ingrese el nombre del Jugador:");
        getstr(nombreJugador);
        string nombreAUX = nombreJugador;
        printw("\n");
        printw("Ingrese el numero de camiseta del jugador:");
        getstr(numero_camiseta);
        int auxCamiseta = conversionATOI(numero_camiseta);
        printw("\n");
        printw("Ingrese el nivel del jugador:");
        getstr(nivel);
        int auxNivel = conversionATOI(nivel);

        equipo->setJugador(new Jugador(nombreAUX, auxCamiseta, auxNivel));

      }

      ListaEquipos.push_back(equipo);

      printw("\n");
      clear();
      printw("Equipo creador Existosamente");

    }
    if(opcion=='2'){ //cargar
      string STRING;
    	ifstream infile;
    	infile.open ("Equipos.txt");
        while(!infile.eof()) // To get you all the lines.
        {
	        getline(infile,STRING); // Saves the line in STRING.
          ListaEquipos.push_back(new Equipo(STRING));
	        //cout<<STRING; // Prints our STRING.
        }
	       infile.close();
	      //system ("pause");
        ListaEquipos.erase(ListaEquipos.begin() + ListaEquipos.size()-1);
        printw("\n");
        printw("Equipos cargados exitosamente");
        printw("\n");

    }
    if(opcion=='3'){ //ver lista equipos
      clear();
      for (int i = 0; i < ListaEquipos.size(); i++) {
          printw("%d", i);
          addch(')');
          addch(' ');
          printw(ListaEquipos.at(i)->toString().c_str());
      }//Fin del for

    }
    if(opcion=='4'){
      if(ListaEquipos.size()>0){
        clear();
        char cantidad[100];
        printw("Ingrese la cantidad de partidos que desea en el torneo:");
        getstr(cantidad);
        int cantidadPartidos = conversionATOI(cantidad);
        for (int i = 0; i < cantidadPartidos; i++) {
          for (int j = 0; j < ListaEquipos.size(); j++) {
              printw("%d", j);
              addch(')');
              addch(' ');
              printw(ListaEquipos.at(j)->toString().c_str());
          }//Fin del for
          printw("\n");
          char EquipoEscoger[100];
          int pos=0;
          Partido* match;
          printw("Escoja un equipo para crear partido: ");
          getstr(EquipoEscoger);
          pos = conversionATOI(EquipoEscoger);
          if ((pos < 0) || (pos >= ListaEquipos.size())) {
              for (;(pos < 0) || (pos >= ListaEquipos.size());) {
                  printw("\n");
                  printw("No ingreso una posicion valida.");
                  printw("\n");
                  printw("Escoja un equipo para crear partido:");
                  getstr(EquipoEscoger);
                  pos = conversionATOI(EquipoEscoger);
              }//fin for validacion
          }//Validar posicion
          printw("\n");
          char EquipoEscoger2[100];
          int pos2 =0;
          printw("Escoja otro equipo para crear partido: ");
          getstr(EquipoEscoger2);
          pos2 = conversionATOI(EquipoEscoger2);
          if ((pos2 < 0) || (pos2 >= ListaEquipos.size())) {
              for (;(pos2 < 0) || (pos2 >= ListaEquipos.size());) {
                  printw("\n");
                  printw("No ingreso una posicion valida.");
                  printw("\n");
                  printw("Escoja otro equipo para crear partido:");
                  getstr(EquipoEscoger2);
                  pos2 = conversionATOI(EquipoEscoger2);
              }//fin for validacion
          }//Validar posicion
          match= new Partido(ListaEquipos.at(pos),ListaEquipos.at(pos2), 0, 0); //ambos equipos comienzan con 0 goles

          printw("\n");
          printw("Partido Creado");
          printw("\n");

          torneo->setPartido(match);
        } //fin for externo

        printw("\n");
        printw("Torneo Creado");
        printw("\n");
      }else{
        printw("\n");
        printw("No hay equipos");
        printw("\n");

      }

    }
    if(opcion=='5'){ //ver lista de partidos
      clear();
      for (int i = 0; i < torneo->getTorneoSize(); i++) {
          printw("%d", i);
          addch(')');
          addch(' ');
          printw("\n");
          printw(torneo->getPartido(i)->getLocal()->toString().c_str());
          //printw("\n");
          printw("vs");ofstream archivo;
          printw("\n");
          printw(torneo->getPartido(i)->getVisita()->toString().c_str());
      }//Fin del for
        printw("\n");

    }
    if(opcion=='6'){ //guardar equipos
      ofstream archivo4;
      archivo4.open("Equipos.txt");
      for (int i = 0; i < ListaEquipos.size(); i++) {
        archivo4 << ListaEquipos.at(i)->toString();
      }
      archivo4.close();
      printw("\n");
      printw("Equipos guardados exitosamente");


    }
  }while(opcion!='7');

  delete torneo; //Liberar espacio en memoria

  clear();
  attron(A_STANDOUT | A_UNDERLINE);
  mvprintw(12, 40, "Presione ENETER para salir");
  attroff(A_STANDOUT | A_UNDERLINE);

  getch();
  endwin();
  return 0;
}

int conversionATOI(char arreglo[]) { //metodo para convertir arreglo de caracteres a enteros
    stringstream ss2;
    int valor = 0;
    string auxiliar = arreglo;
    string help2 = "";
    for (int i = 0 ; i < auxiliar.size(); i++) {
        ss2 << arreglo[i];
    }//Fin del for
    help2 = ss2.str();
    valor = atoi(help2.c_str());
    return valor;
}//Fin del metodo.

void menu(){
  printw("\n");
  start_color();
  init_pair(1, COLOR_RED, COLOR_BLUE);
  attron(COLOR_PAIR(1));
  printw("CREADOR DE TORNEO DE FUTBOL");
  attroff(COLOR_PAIR(1));
  printw("\n");
  printw("1) Crear Equipo\n");
  printw("2) Cargar Equipos Guardados\n");
  printw("3) Ver Lista de Equipos\n");
  printw("4) Crear Torneo\n");
  printw("5) Ver Lista de Partidos en el Torneo\n");
  printw("6) Guardar Equipos\n");
  printw("7) Salir\n");
  printw("Ingrese su opcion:");
}//Fin del menu

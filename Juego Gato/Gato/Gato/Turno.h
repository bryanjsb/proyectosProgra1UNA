#pragma once
#include "Tablero.h"
#include"jugador.h"
class Turno
{
private:
	int const GANE = 3;
	int const LIMITE_INTENTOS = 9;
	int cont;
	Tablero* matriz;
	Jugador* j1;
	Jugador* j2;
public:
	Turno();
	~Turno();
	void Juego();
	void dibujarGato();
	void ingresarInfoJugadores();
	bool intento(Jugador*);
	
	bool Gana(Simbolo*);
	int horizontal(Simbolo*);
	int vertical(Simbolo*);
	int diagonal(Simbolo*);
	int diagonalInversa(Simbolo*);
	
};


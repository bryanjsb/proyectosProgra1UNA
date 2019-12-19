#pragma once
#include"Simbolo.h"

class Jugador
{
private:
	string nombre;
	Simbolo *simb;
public:
	Jugador(string);
	Jugador();
	~Jugador();
	void setNombre(string);
	string getNombre();
	string tostring();
	void setSimbolo(string);
	Simbolo* getSimbolo();
};


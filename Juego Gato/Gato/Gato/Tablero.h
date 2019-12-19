//Esta es la matriz "dinamica". Es dinamica por que usa una clase externa que se le asigna un puntero
#pragma once
#include"Simbolo.h"
class Tablero {
private:
	int static const fila = 3;
	int static const columna = 3;
	Simbolo* matriz[fila][columna];
public:
	// Constructores
	Tablero();
	~Tablero();
	void setSimbolo(Simbolo*, int, int);
	Simbolo* getSimbolo(int, int);
	void LLenaTablero();
	bool Ocupado(int, int);
	string toString();
};


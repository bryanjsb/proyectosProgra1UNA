#pragma once
#include"Turno.h"

class juego {

private:
	Turno* tur;
	bool var;
	string e = "		";
	char a = (char)219;//Variables char para poder imprimirlas como un tipo ofstream
	char b = (char)187;
	char c = (char)201;
	char d = (char)205;
	char f = (char)186;
	char g = (char)200;
	char h = (char)188;
	char i = (char)220;
	char j = (char)223;
	
public:
	juego();
	~juego();
	void dibujar();
	void jugar();
	void terminarJuego();
};
#include "Jugador.h"

Jugador::Jugador():Jugador(" ") {}

Jugador::Jugador(string x) {
	nombre = x;
	simb = new Simbolo();
}

Jugador::~Jugador() {
	delete simb;
}

string Jugador::getNombre(){
	return nombre;
}

void Jugador::setNombre(string x){
	nombre=x;
}

void Jugador::setSimbolo(string s) {
	simb->setSimbolo(s);
}

Simbolo* Jugador::getSimbolo() {
	return simb;
}

string Jugador::tostring(){
	stringstream s;
	s<<nombre<<endl;
	return s.str();
}
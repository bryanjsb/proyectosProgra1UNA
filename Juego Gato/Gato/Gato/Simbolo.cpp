#include "Simbolo.h"

Simbolo::Simbolo(){
	this->simbolo = "";
}

Simbolo::Simbolo(string x) {
	this->simbolo = x;
}

void Simbolo::setSimbolo(string x) {
	this->simbolo = x;
}

string Simbolo::getSimbolo() {
	return this->simbolo;
}

string Simbolo::toString() {
	stringstream s;
	s << simbolo;
	return s.str();
}

Simbolo::~Simbolo(){}

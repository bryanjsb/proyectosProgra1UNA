#include "Tablero.h"
// cpp de la clase tablero
Tablero::Tablero(){
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			this->matriz[i][j]=NULL;
		}
	}
}

Tablero::~Tablero(){}

void Tablero::setSimbolo(Simbolo* x,int fila,int columna){
	this->matriz[fila][columna]=x;
}

Simbolo* Tablero::getSimbolo(int fila, int columna){
	return this->matriz[fila][columna];
}

void Tablero::LLenaTablero(){
	for(int i=0;i<fila;i++){
		for(int j=0;j<columna;j++){
			this->matriz[i][j]= new Simbolo(" ");
		}
	}
}
string Tablero::toString(){
	stringstream s;
	int ind = 0;
	s<<"     0 	   1      2    " << endl;
	 for(int i = 0 ; i < fila ; i++){
		s << "   +-----+-----+-----+" << endl;
		s << ind++ <<"  ";
		for(int j = 0 ; j < columna ; j++){
			s << "|";
			if(matriz[i][j]==NULL){
				s << "     ";
			}
			else
				s <<"  "<<matriz[i][j]->toString()<<"  ";
		}
		s << "|" << endl;
	 }
	 s << "   +-----+-----+-----+" << endl;
	 return s.str();	
}

bool Tablero::Ocupado(int fila, int columna){
	return (this->matriz[fila][columna]->getSimbolo() != " ");
}
#include "Turno.h"

Turno::Turno() {
	this->matriz = new Tablero();
	this->j1 = new Jugador();
	this->j2 = new Jugador();
	cont = 1;
}

Turno::~Turno() {
	delete matriz, j1, j2;
}

void Turno::Juego() {
	system("cls");
	matriz->LLenaTablero();
	bool empate = true;
	cont = 1;
	while (cont <= LIMITE_INTENTOS) {
		dibujarGato();
		if (cont % 2 == 1) {
			if (intento(j1)) {
				empate = false;
				break;
			}
		}
		else if (cont % 2 == 0) {
			if (intento(j2)) {
				empate = false;
				break;
			}
		}

	}

	if (empate) {
		cout << "		EMPATE		" << endl;
		system("pause");
	}
}


void Turno::ingresarInfoJugadores() {
	string nom1, nom2;
	cout << "Digite el nombre del jugador 1 =	";
	cin >> nom1;
	this->j1->setNombre(nom1);
	this->j1->setSimbolo("X");
	cout << j1->getNombre() << " " << "juega con "<<j1->getSimbolo()->getSimbolo() << endl;
	cout << "Digite el nombre del jugador 2 =	";
	cin >> nom2;
	this->j2->setNombre(nom2);
	this->j2->setSimbolo("O");
	cout << j2->getNombre() << " " << "juega con "<< j2->getSimbolo()->getSimbolo() << endl;
}

bool Turno::intento(Jugador* j) {
	int fila;
	int columna;

	cout << "Digite la fila y columna donde quiere ubicar la " <<
		j->getSimbolo()->getSimbolo() << endl;
	cout << "Fila	";
	cin >> fila;
	cout << "Columna	";
	cin >> columna;
	if (!this->matriz->Ocupado(fila, columna)) {
		matriz->setSimbolo(j->getSimbolo(), fila, columna);
		dibujarGato();
		if (Gana(j->getSimbolo())) {
			cout << "GANADOR " << j->getNombre() << endl;
			system("pause");
			return true;
		}
		else {
			cont++;
		}
	}
	else {
		cout << " Casilla Ocupada... Intente de nuevo" << endl;
		system("pause");
	}
	return false;
}

void Turno::dibujarGato() {
	system("cls");
	cout << matriz->toString() << endl;
}

bool Turno::Gana(Simbolo* x) {

	bool resultado = false;
	//horizontal
	int horiz = horizontal(x);
	//vertical
	int vert = vertical(x);
	//Diagonal
	int diago = diagonal(x);
	//Diagonal Inversa
	int diagoInver = diagonalInversa(x);

	if (horiz == GANE || vert == GANE || diago == GANE || diagoInver == GANE) {
		resultado = true;
	}

	return resultado;
}


int Turno::horizontal(Simbolo* x) {
	int cont = 0;

	for (int i = 0; i < 3; i++) {
		cont = 0;
		for (int j = 0; j < 3; j++) {
			if (this->matriz->getSimbolo(i, j)->getSimbolo() == x->getSimbolo()) {
				cont++;
			}
		}
		if (cont == GANE) {
			break;
		}
	}
	return cont;
}

int Turno::vertical(Simbolo* x) {

	int cont;
	for (int i = 0; i < 3; i++) {

		cont = 0;
		for (int j = 0; j < 3; j++) {
			if (this->matriz->getSimbolo(j, i)->getSimbolo() == x->getSimbolo()) {
				cont++;
			}
		}

		if (cont == GANE) {
			break;
		}
	}
	return cont;
}
int Turno::diagonal(Simbolo* x) {
	int cont = 0;
	for (int i = 0; i < 3; i++) {
		if (this->matriz->getSimbolo(i, i)->getSimbolo() == x->getSimbolo()) {
			cont++;
		}
	}
	return cont;
}

int Turno::diagonalInversa(Simbolo* x) {
	int cont = 0;
	int diago = 0;
	for (int i = 2; i <= 0; i--) {
		if (this->matriz->getSimbolo(diago, i)->getSimbolo() == x->getSimbolo()) {
			cont++;
			diago++;
		}
	}
	return cont;
}
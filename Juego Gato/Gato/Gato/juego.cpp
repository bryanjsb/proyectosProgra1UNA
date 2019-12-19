#include"juego.h"

juego::juego() {
	tur = new Turno();
	var = true;
}
juego::~juego() {
	delete tur;
}

void juego::dibujar() {

	system("cls");
	cout << e << a << a << a << a << a << a << b << "  " << a << a << a << a << a << b << " " << a << a << a << a << a << a << a << a << b << " " << a << a << a << a << a << a << b << endl;
	cout << e << a << a << c << d << d << d << d << h << " " << a << a << c << d << d << a << a << b << g << d << d << a << a << c << d << d << h << a << a << c << d << d << d << a << a << b << endl;
	cout << e << a << a << f << "  " << a << a << a << b << a << a << a << a << a << a << a << f << "   " << a << a << f << "   " << a << a << f << "   " << a << a << f << endl;
	cout << e << a << a << f << "   " << a << a << f << a << a << c << d << d << a << a << f << "   " << a << a << f << "   " << a << a << f << "   " << a << a << f << endl;
	cout << e << g << a << a << a << a << a << a << c << h << a << a << f << "  " << a << a << f << "   " << a << a << f << "   " << g << a << a << a << a << a << a << c << h << endl;
	cout << e << " " << g << d << d << d << d << d << h << " " << g << d << h << "  " << g << d << h << "   " << g << d << h << "    " << g << d << d << d << d << d << h << endl;
}

void juego::jugar() {
	dibujar();
	tur->ingresarInfoJugadores();
	while (var) {
		
		cout << endl << endl;
		cout << "		";
		system("pause");
		tur->Juego();
		terminarJuego();
	}
}

void juego::terminarJuego() {
	system("cls");
	cout << "Desea jugar de nuevo" << endl;
	cout << "\t\t1 para SI" << endl;
	cout << "\t\t2 para NO" << endl;
	int desicion;
	cin >> desicion;

	if (desicion==2) {
		var = false;
	}
}
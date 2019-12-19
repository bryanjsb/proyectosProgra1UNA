#include<string>
#include "juego.h"

int main()
{
	system("color CF");
	juego *jugar = new juego();
	jugar->jugar();
	delete jugar;
	system("pause");
	return 0;
}



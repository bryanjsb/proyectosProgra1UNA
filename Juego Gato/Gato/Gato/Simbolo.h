#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class Simbolo {
private:
	string simbolo;
public:
	Simbolo();
	Simbolo(string);
	void setSimbolo(string);
	string getSimbolo();
	string toString();
	~Simbolo();
};



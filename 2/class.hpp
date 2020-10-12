#include <iostream>
#include <conio.h>
using namespace std;

class Madre {
private:
	string nombre;
	int edad;
public:
	Madre(string, int);
	void mostrarM();
};

class Hija: public Madre {
private:
	string nombre;
	int edad;
public:
	Hija(string, int);
	void mostrarH();
};

Madre::Madre(string _nombre, int _edad) {
	nombre = _nombre;
	edad = _edad;
}

Hija::Hija(string _nombre, int _edad) : Madre(_nombre, _edad) {
	nombre = _nombre;
	edad = _edad;
}

void Madre::mostrarM() {
	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
}

void Hija::mostrarH() {
	mostrarM();
}
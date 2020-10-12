#include <iostream>
#include <conio.h>
#include "class.hpp"
using namespace std;

int main() {

	Madre m1("Liopo Faxas", 65);
	Hija h1("Lionel Andres Messi", 20);
	
	m1.mostrarM();
	cout << endl;
	h1.mostrarH();

	cout << "\nPresione cualquier tecla para salir del programa." << endl;
	return 0;
}
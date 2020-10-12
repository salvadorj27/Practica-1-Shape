#include <iostream>
#include <cstring>
using namespace std;

class Animal
{
	private:
	 int edad;char nombre[10];
	public:
	 void set_value (int a, char b[10])
	 {
		edad = a;
		strcpy(b,nombre);
	 }

};

class Zebra:public Animal
{public:

void mensaje_zebra()
{cout<< "La zebra se llama " << nombre <<" tiene " << edad << "de edad, es de Yugoslavia. \n";}
};

class Delfin: public Animal
{public:

void mensaje_delfin()
{cout<< "El delfin se llama " << nombre << " tiene " << edad << "de edad, es de Madeira.\n";}
};


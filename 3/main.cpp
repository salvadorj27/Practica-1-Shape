#include <iostream>
#include <cstring>
#include "animal.hpp"
using namespace std;

int main ()
{
	Zebra zeb;
	Delfin del;
	char n1[10]="Marty";
	char n2[10]="Ronaldo";

	zeb.set_value (5,n1);
	del.set_value (7,n2);

	zeb.mensaje_zebra() ;
	del.mensaje_delfin() ;

	return 0;
}
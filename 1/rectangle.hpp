#include <iostream>
#include "shape.hpp"
using namespace std;

class Rectangle: public Shape
{
public:
	float area ()
	{
		return (ancho * alto);
	}
};

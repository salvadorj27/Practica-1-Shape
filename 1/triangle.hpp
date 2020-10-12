#include <iostream>
#include "shape.hpp"
using namespace std;

class Triangle: public Shape
{
public:
	float area ()
	{
		return (ancho * alto / 2);
	}
};
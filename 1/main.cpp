#include <iostream>
#include "shape.hpp"
#include "rectangle.hpp"
#include "triangle.hpp"
using namespace std;

int main (){

	Rectangle rect;
	Triangle tri;
	rect.set_val (7,5);
	tri.set_val (5,9);
	cout << rect.area() << endl;
	cout << tri.area() << endl;
	return 0;
}
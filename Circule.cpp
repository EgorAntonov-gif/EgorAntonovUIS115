#include"Circule.h"
Circule::Circule(double radius) :radius{ radius } {}
double Circule::Perimetr() {
	return 2 * M_PI * radius;
}
double Circule::Square() {
	return M_PI * pow(radius, 2);
}
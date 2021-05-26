#include"Triangle.h"
Triangle::Triangle(double a, double b, double c, double h) : side1{ a }, side2{ b }, side3{ c }, height{ h }{}
double Triangle::Perimetr() {
	return side1 + side2 + side3;
}
double Triangle::Square() {
	return  side3*height/2;
}
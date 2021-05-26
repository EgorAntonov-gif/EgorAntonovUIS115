#include"Rectangle.h"
Rectangle::Rectangle(double a, double b) :side1{ a }, side2{ b }{}
double Rectangle::Perimetr() {
	return (side1 + side2) *2;
}
double Rectangle::Square() {
	return side1 * side2;
}
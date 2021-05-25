#include"Liquid.h"
#include "Alcohol.h"
using namespace std;

void Alcohol::set_strength_drink(double strength_drink)
{
	if (strength_drink > 0 && strength_drink <= 96)
	{
		this->strength_drink = strength_drink;
	}
	else
	{
		throw invalid_argument{ "Неверная крепость напитка" };
	}
}
void Alcohol::set_new_strength_drink(double strength_drink)
{
	set_strength_drink(strength_drink);
}
Alcohol::Alcohol(double strength_drink, string name, double density)
{
	this->strength_drink = strength_drink;
	this->name = name;
	set_density(density);
}
double Alcohol::get_strength_drink()
{
	return strength_drink;
}
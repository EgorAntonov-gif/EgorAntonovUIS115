#include"Liquid.h"
using namespace std;
void Liquid::set_density(double density)
{
	if (density > 0)
	{
		this->density = density;
	}
	else
	{
		throw invalid_argument{ "ѕлотность должна быть больше нул¤" };
	}
}
Liquid::Liquid()
{
	name = "";
	density = 0;
}
Liquid::Liquid(string name, double density)
{
	this->name = name;
	set_density(density);
}
void Liquid::set_new_density(double density)
{
	this->density = density;
}
void Liquid::set_name(string name)
{
	this->name = name;
}
string Liquid::get_name()
{
	return name;
}
double Liquid::get_density()
{
	return density;
}
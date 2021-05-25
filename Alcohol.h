#pragma once
#include"Liquid.h"
using namespace std;

class Alcohol:public Liquid
{
private:
	double strength_drink;
	void set_strength_drink(double strength_drink);
public:
	explicit Alcohol(double strength_drink, string name, double density);
	double get_strength_drink();
	void set_new_strength_drink(double strength_drink);
};


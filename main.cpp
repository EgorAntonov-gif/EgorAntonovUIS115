#include <iostream>
#include"Liquid.h"
#include "Alcohol.h"
using namespace std;

int main()
{
	Alcohol a(40, "VODKA", 40);
	cout << a.get_density() << endl;
	cout << a.get_name() << endl;
	cout << a.get_strength_drink() << endl;
	a.set_new_density(60);
	cout << a.get_density() << endl;
}
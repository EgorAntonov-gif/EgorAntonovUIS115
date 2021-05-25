#pragma once
#include <string>
#include<iostream>
using namespace std;

class Liquid
{
protected:
	string name;
	double density;
	void set_density(double density);
public:
	Liquid();
	explicit Liquid(string name, double density);
	~Liquid() = default;
	double get_density();
	string get_name();
	void set_new_density(double density);
	void set_name(string name);
};
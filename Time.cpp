#include "Time.h"
#include <iostream>

double get_seconds(double a, double b)
{
	return (a * 3600 + b * 60);
}

double get_seconds_2(double a, double b)
{
	if (a >= 0 && b >= 0)
	{
		return get_seconds(a, b);
	}
	else
	{
		throw 1;
	}
}

double get_seconds_3(double a, double b)
{
	if (a >= 0 && b >= 0)
	{
		return get_seconds(a, b);
	}
	else
	{
		throw std::invalid_argument("Error! Hours and minnutes can't be less than 0");
	}
}

double get_seconds_4(double a, double b)
{
	if (a >= 0 && b >= 0)
	{
		return get_seconds(a, b);
	}
	else
	{
		throw empty_class();
	}
}

double  get_seconds_5(double a, double b)
{
	if (a >= 0 && b >= 0)
	{
		return get_seconds(a, b);
	}
	else
	{
		throw independent_class("Error! Hours and minnutes can't be less than 0. Independent class.");
	}
}

double  get_seconds_6(double a, double b)
{
	if (a >= 0 && b >= 0)
	{
		return get_seconds(a, b);
	}
	else
	{
		throw successor_class("Error! Hours and minnutes can't be less than 0. Successor class.");
	}
}
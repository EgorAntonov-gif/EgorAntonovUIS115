#pragma once
#include"Liquid.h"
using namespace std;

class Alcohol:public Liquid
{
private:
	double strength_drink;
	const double max_strenght = 96;
	/**
	 \brief    Сеттер проверки крепости.
	 */
	void set_strength_drink(double strength_drink);
public:
	/**
	 \brief    Конструктор с параметрами.
	 */
	explicit Alcohol(double strength_drink, string name, double density);
	/**
	 \brief    Вывод крепости
	 \returns    Возвращает крепость.
	 */
	double get_strength_drink();
	/**
     \brief    Изменение крепости.
     */
	void set_new_strength_drink(double strength_drink);
};


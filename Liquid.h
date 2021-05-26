#pragma once
#include <string>
#include<iostream>
using namespace std;

class Liquid
{
protected:
	string name;
	double density;
	/**
	 \brief    Сеттер проверки плотности.
	 */
	void set_density(double density);
public:
	/**
	 \brief    Конструктор по умолчанию.
	 */
	Liquid();
	/**
	 \brief    Конструктор с параметрами.
	 */
	explicit Liquid(string name, double density);
	/**
	 \brief    Деструктор по умолчанию.
	 */
	~Liquid() = default;
	/**
	 \brief    Вывод плотности
	 \returns    Возвращает плотность.
	 */
	double get_density();
	/**
	 \brief    Вывод названия
	 \returns    Возвращает название.
	 */
	string get_name();
	/**
	 \brief    Изменение длины.
	 */
	void set_new_density(double density);
	/**
	 \brief    Изменение названия.
	 */
	void set_name(string name);
};
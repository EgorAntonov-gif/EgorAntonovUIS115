#pragma once
#define _USE_MATH_DEFINES
#include"Figure.h"
#include<cmath>
/**
* \brief  Класс круг
*/
class Circule :Figure {
private:
	double radius;
public:
	/**
	* \brief  Конструктор с параметрами
	*/
	Circule(double radius);

	/**
	* \brief  Деструктор по умолчанию
	*/
	~Circule() = default;

	/**
	* \brief Метод,вычисляющий периметр фигуры
	* \return Периметр фигуры
	*/
	double Perimetr();

	/**
	* \brief Метод,вычисляющий площадь фигуры
	* \return Площадь фигуры
	*/
	double Square();
};
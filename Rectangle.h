#pragma once
#include"Figure.h"
/**
* \brief  Класс параллелограмм
*/
class Rectangle :Figure {
private:
	double side1, side2;
public:
	/**
	* \brief  Конструктор с параметрами
	*/
	Rectangle(double a, double b);

	/**
	* \brief  Деструктор по умолчанию
	*/
	~Rectangle() = default;

	/**
	* \brief Метод,вычисляющий периметр фигуры
	* \return ѕериметр фигуры
	*/
	double Perimetr();

	/**
	* \brief Метод,вычисляющий площадь фигуры
	* \return Площадь фигуры
	*/
	double Square();
};
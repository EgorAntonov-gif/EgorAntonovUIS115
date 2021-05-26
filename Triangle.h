#pragma once
#include"Figure.h"
/**
* \brief  Класс трапеци¤
*/
class Triangle : Figure {
private:
	double side1, side2, side3, height;
public:
	/**
	* \brief  Конструктор с параметрами
	*/
	Triangle(double a, double b, double c, double h);

	/**
	* \brief  Деструктор по умолчанию
	*/
	~Triangle() = default;

	/**
	* \brief Метод,вычисляющий периметр фигуры
	* \return Периметрериметр фигуры
	*/
	double Perimetr();

	/**
	* \brief Метод,вычисляющий площадь фигуры
	* \return Площадь фигуры 
	*/
	double Square();
};
#pragma once
#include"iostream"
/**
* \brief Класс геометрические фигуры
*/
class Figure {
protected:
	/**
	* \brief Виртуальный метод,вычисл¤ющий периметр фигуры
	*/
	virtual double Perimetr() = 0;
	/**
	* \brief Виртуальный метод,вычисл¤ющий площадь фигуры
	*/
	virtual double Square() = 0;

	/**
	* \brief Виртуальный  деструктор
	*/
	virtual ~Figure() = 0;
};


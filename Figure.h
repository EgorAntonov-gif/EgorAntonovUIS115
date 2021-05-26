#pragma once
#include"iostream"
/**
* \brief † ласс геометрические фигуры
*/
class Figure {
protected:
	/**
	* \brief ¬иртуальный метод,вычисл€ющий периметр фигуры
	*/
	virtual double Perimetr() = 0;
	/**
	* \brief ¬иртуальный метод,вычисл€ющий площадь фигуры
	*/
	virtual double Square() = 0;

	/**
	* \brief ¬иртуальный  деструктор
	*/
	virtual ~Figure() = 0;
};


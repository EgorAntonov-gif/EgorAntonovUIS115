#pragma once
#include"iostream"
/**
* \brief ������ �������������� ������
*/
class Figure {
protected:
	/**
	* \brief ����������� �����,����������� �������� ������
	*/
	virtual double Perimetr() = 0;
	/**
	* \brief ����������� �����,����������� ������� ������
	*/
	virtual double Square() = 0;

	/**
	* \brief �����������  ����������
	*/
	virtual ~Figure() = 0;
};


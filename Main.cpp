#include<iostream>
#include"Circule.h"
#include"Rectangle.h"
#include"Triangle.h"
int main(){
	using namespace std;
	setlocale(LC_ALL, "Russian");
	cout << "Выбирете фигуру:\n1 - Круг\n2 - Прямоунрльник\n3 - Треугольник"<<endl;
	int a;
	cin >> a;
	Circule ObjCircule(2);
	Rectangle ObjRectangle(4,3);
	Triangle ObjTriangle(4,4,2,3);
	switch (a)
	{
	case 1:		
		cout << "Периметр круга равен: "<<ObjCircule.Perimetr()<<endl;
		cout << "Площадь круга равна: "<<ObjCircule.Square()<<endl;
		break;
	case 2:
		cout << "Периметр прямоугольника равен: " << ObjRectangle.Perimetr() << endl;
		cout << "Площадь прямоугольника равна: " << ObjRectangle.Square() << endl;
		break;
	case 3:
		cout << "Периметр треугольника равен: " << ObjTriangle.Perimetr() << endl;
		cout << "Площадь треугольника равна: " << ObjTriangle.Square() << endl;
		break;
	default:
		cout << "Фигура выбрана не правильно."<<endl;
		break;
	}
}
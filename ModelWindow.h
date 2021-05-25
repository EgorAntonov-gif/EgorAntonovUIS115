#pragma once
#include <string>


class ModelWindow
{
private:


	class RGB
	{
	private:
		/**
		*\brief красный цвет
		*/
		unsigned int red;

		/**
		*\brief зелёный цвет
		*/
		unsigned int green;

		/**
		*\brief синий цвет
		*/
		unsigned int blue;
		void set_colors(unsigned int red, unsigned int green, unsigned int blue) {
			if (red <= 255 && green <= 255 && blue <= 255) {
				this->red = red;
				this->green = green;
				this->blue = blue;
			}
		}

	public:
		/**
		*\brief Конструктор по умолчанию
		*/
		RGB()
		{

		}

		/**
		*\brief Конструктор с параметрами
		*\param  red красный цвет
		*\param green зелёный цвет
		*\param blue синий цвет
		*/
		RGB(unsigned int red, unsigned int green, unsigned int blue)
		{
			set_colors(red, green, blue)
		}
		RGB& operator=(const  RGB&) = default;
	};



	/**
	*\brief Заголовок окна
	*/
	std::string window_title;
	/**
	*\brief Координата x левого верхнего угла
	*/
	unsigned int coordinate_x0;
	/**
	*\brief Координата y левого верхнего угла
	*/
	unsigned int coordinate_y0;
	/**
*\brief Вертикальный размер
*/
	unsigned int vertical_size;
	/**
	*\brief Горизонтальный размер
	*/
	unsigned int horizontal_size;
	/**
	*\brief Цвет окна
	*/
	RGB colour;
	/**
	*\brief Видимость/невидимость окна
	*/
	bool visibility;
	/**
	*\brief Окно с рамкой/без рамки
	*/
	bool framed;
	/**
	*\brief Высота дисплея
	*/
	unsigned int display_height;
	/**
	*\brief Ширина дисплея
	*/
	unsigned int display_length;


	/**
	*\brief Сеттер для проверки размеров окна
	*\param window_title Заголовок окна
	*\param coordinate_x0 Координата x левого верхнего угла
	*\param coordinate_y0 Координата y левого верхнего угла
	*\param vertical_size  Вертикальный размер
	*\param horizontal_size Горизонтальный размер
	*\param colour Цвет окна
	*\param bool is_visibile Видимость/невидимость окна
	*\param bool has_frame Окно с рамкой/без рамки
	*\param display_height Высота дисплея
	*\param display_length Ширина дисплея
	*/
	void set_window(std::string& window_title, unsigned int coordinate_x0, unsigned int coordinate_y0, unsigned int vertical_size, unsigned int horizontal_size, RGB colour, bool visibility, bool framed, unsigned int display_height, unsigned int display_length);
public:

	/**
	*\brief Конструктор с параметрами
	*\param window_title Заголовок окна
	*\param coordinate_x0 Координата x левого верхнего угла
	*\param coordinate_y0 Координата y левого верхнего угла
	*\param vertical_size  Вертикальный размер
	*\param horizontal_size Горизонтальный размер
	*\param colour Цвет окна
	*\param bool visibility Видимость/невидимость окна
	*\param bool framed Окно с рамкой/без рамки
	*\param display_height Высота дисплея
	*\param display_length Ширина дисплея
	*/
	explicit ModelWindow(std::string& window_title, int coordinate_x0, int coordinate_y0, int vertical_size, int horizontal_size, std::string& colour, bool visibility, bool framed, int display_height, int display_length);


	/**
	*\brief Конструктор копирования
	*/
	ModelWindow(const  ModelWindow& other)
	{

	}

	/**
	*\brief Конструктор присвоения
	*/
	ModelWindow& operator=(const  ModelWindow&) = default;

	/**
	*\brief деструктор по умолчанию
	*/
	~ModelWindow() = default;


	/**
	*\brief  Метод, возвращающий вертикальное передвижение
	*\param coordinate_x0 Координата x левого верхнего угла
	*\param coordinate_y0 Координата y левого верхнего угла
	*/
	int get_vertical_movement(int coordinate_x0, int coordinate_y0);

	/**
	*\brief  Метод, возвращающий горизонтальное передвижение
	*\param coordinate_x0 Координата x левого верхнего угла
	*\param coordinate_y0 Координата y левого верхнего угла
	*/
	int get_horizontal_movement(int coordinate_x0, int coordinate_y0);


	/**
	*\brief  Метод, возвращающий изменение вертикального размера
	*\param coordinate_x0 Координата x левого верхнего угла
	*\param coordinate_y0 Координата y левого верхнего угла
	*\param vertical_size  Вертикальный размер
	*/
	int get_change_of_vertical_size(int coordinate_x0, int coordinate_y0, int vertical_size);


	/**
	*\brief  Метод, возвращающий изменение горизонтального размера
	*\param coordinate_x0 Координата x левого верхнего угла
	*\param coordinate_y0 Координата y левого верхнего угла
	*\param horizontal_size Горизонтальный размер
	*/
	int get_change_of_horizontal_size(int coordinate_x0, int coordinate_y0, int horizontal_size);

	/**
	*\brief  Метод, возвращающий изменение цвета
	*\param colour Цвет окна
	*/
	std::string get_change_of_colour(std::string& colour);


	/**
	*\brief  Метод, возвращающий изменение состояния (с рамкой/без рамки)
	*\param bool framed Окно с рамкой/без рамки
	*/
	bool is_changing_of_framed(bool framed);


	/**
	*\brief  Метод, возвращающий состояние (видимое/невидимое)
	*\param bool visibility Видимость/невидимость окна
	*/
	bool is_visibility(bool visibility);


	/**
	*\brief  Метод, возвращающий состояние (с рамкой/без рамки)
	*\param bool framed Окно с рамкой/без рамки
	*/
	bool is_framed(bool framed);
};
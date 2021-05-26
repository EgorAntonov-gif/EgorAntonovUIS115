#include "ModelWindow.h"
using namespace std;

ModelWindow::RGB::RGB(unsigned int red, unsigned int green, unsigned int blue)
{
	set_colors(red, green, blue)
}
ModelWindow::RGB::set_colors(const unsigned int red, const unsigned int green, const unsigned int blue) {
	if (red <= 255 && green <= 255 && blue <= 255) {
		this->red = red;
		this->green = green;
		this->blue = blue;
	}
	else
	{
		throw 1;
	}
}
void ModelWindow::set_window(unsigned int vertical_size, unsigned int horizontal_size, unsigned int display_height, unsigned int display_length)
{
	if (vertical_size  > 0 && horizontal_size > 0 && display_height > 0 && display_lenght > 0)
	{
		this->vertical_size = vertical_size;
		this->horizontal_size = horizontal_size;
		this->display_height = display_height;
		this->display_length = display_length;
	}
}
ModelWindow::ModelWindow(std::string& window_title, int coordinate_x0, int coordinate_y0, int vertical_size, int horizontal_size, unsigned int red, const unsigned int green, const unsigned int blue, bool visibility, bool framed, int display_height, int display_length)
{
	set_window(vertical_size, horizontal_size, display_height, display_length);
	this->window_title = window_title;
	this->coordinate_x0 = coordinate_x0;
	this->coordinate_y0 = coordinate_y0;
	RGB color(colour_red, colour_green, colour_blue);
	this->visibility = visibility;
	this->framed = framed;
}
void ModelWindow::set_vertical_movement(unsigned int coordinate_y0)
{
	this->coordinate_y0 = coordinate_y0;
}
void ModelWindow::set_horizontal_movement(int coordinate_x0)
{
	this->coordinate_x0 = coordinate_x0;
}
void ModelWindow::set_change_of_vertical_size(const unsigned int vertical_size) 
{
	this->vertical_size = vertical_size;
}
void ModelWindow::set_change_of_horizontal_size(const unsigned int horizontal_size)
{
	this->horizontal_size = horizontal_size;
}
void ModelWindow::set_change_of_colour(std::string& colour_red, std::string& colour_green, std::string& colour_blue)
{
	RGB color(colour_red, colour_green, colour_blue);
}
bool ModelWindow::is_changing_of_framed(bool framed)
{
	this->framed = framed;
}
bool ModelWindow::is_visibility(bool visibility)
{
	this->visibility = visibility;
}
bool ModelWindow::is_framed(bool framed)
{
	this->framed = framed;
}
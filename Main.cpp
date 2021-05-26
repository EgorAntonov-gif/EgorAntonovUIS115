#include <iostream>
#include "Time.h"

int main()
{
	std::cout << get_seconds(1, 2) << std::endl;

	try
	{
		std::cout << get_seconds_2(-1.2, -3.6) << std::endl;
		std::cout << get_seconds_3(-1.2, -3.6) << std::endl;
		std::cout << get_seconds_4(-1.2, -3.6) << std::endl;
		std::cout << get_seconds_5(-1.2, -3.6) << std::endl;
		std::cout << get_seconds_6(-1.2, -3.6) << std::endl;
	}
	catch (int)
	{
		std::cerr << "Error! One side or more is equal to 0 or less than 0! (specifier twrow)";
	}
	catch (invalid_argument error)
	{
		std::cerr << error.what() << std::endl;
	}
	catch (empty_class)
	{
		std::cerr << "Error!One side or more is equal to 0 or less than 0! (Empty class)" << std::endl;
	}
	catch (independent_class error)
	{
		std::cerr << error.message << std::endl;
	}
	catch (successor_class error)
	{
		std::cerr << error.what() << std::endl;
	}
}
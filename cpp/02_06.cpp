#include <iostream>

int main()
{
	int month = 9, day = 7;
	int month1 = 011, day1 = 07;  //09是个错误的八进制数，应为011 = 9
	std::cout << month << " " << day << std::endl;
	std::cout << month1 << " " << day1 << std::endl;
	return 0;
}

#include <iostream>

std::string global_str;
int global_int;
int main()
{
	int local_int;
	std::string local_str;
	std::cout << global_str << std::endl; //函数体外，被初始化为空
	std::cout << global_int << std::endl; //函数体外，被初始化为0
	std::cout << local_str << std::endl;  //定义在函数体内，但是被初始化为空
	std::cout << local_int << std::endl;  //定义在函数体内，但是被初始化了0
	return 0;
}

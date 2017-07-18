#include <iostream>
int main()
{
	int i = 100, &fi = i, *pi = &i;
	std::cout << fi << std::endl; //引用类型只是另一个名字，本身不是一个对象，一经绑定，无法变更
	std::cout << pi << std::endl; //指针本身就是一个对象
	std::cout << *pi << std::endl;
	pi = 0;
	return 0;

}	

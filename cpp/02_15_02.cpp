#include <iostream>
int main()
{
	float ival =1.01;
	std::cout << ival << std::endl;
	//int &rval1 = 1.01; //引用不能与字面值绑定
	float  &rval2 = ival; //引用类型的初始值必须是int型
	//int &rval3; //定义引用时必须初始化
}

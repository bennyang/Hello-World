#include <iostream>
int main()
{
	std::cout << '\n' << std::endl;  //换行符
	std::cout << '\t' << std::endl;  //横向制表符
	std::cout << '\v' << std::endl;  //纵向制表符
	std::cout << '\b' << std::endl;  //退格符
	std::cout << '\"' << std::endl;  //双引号 
	std::cout << '\\' << std::endl;  //反斜线
	std::cout << '\'' << std::endl;  //
	std::cout << '\?' << std::endl;  
	std::cout << '\r' << std::endl;  //回车符
	std::cout << '\f' << std::endl;  //进纸符
	std::cout << '\a' << std::endl;  //报警符
	std::cout << "\tHi!\n";
	std::cout << "Hi \x4dO\115!\n";
	std::cout << '\115' << '\n';
	std::cout << 'a' << std::endl;
	std::cout << L'a' << std::endl;
	std::cout << "a" << std::endl;
	std::cout << L"a" << std::endl;
	std::cout << 10 << std::endl;
	std::cout << 10u << std::endl;
	std::cout << 10L << std::endl;
	std::cout << 10uL << std::endl;
	std::cout << 012 << std::endl;
	std::cout << 0xC << std::endl;
	std::cout << 3.14 << std::endl;
	std::cout << 3.14f << std::endl;
	std::cout << 3.14L << std::endl;
	std::cout << 10 << std::endl;
	std::cout << 10u << std::endl;
	std::cout << 10. << std::endl;
	std::cout << 10e-2 << std::endl;
	return 0;
}

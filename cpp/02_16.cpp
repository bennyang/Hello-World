#include <iostream>
int main()
{
	int i = 0, &r1 =i;
	double d = 0, &r2 = d;
	std::cout << i << '\t' << d << std::endl;
	r2 = 3.14159; //d = 3.14159
	std::cout << i << '\t' << d << std::endl;
	r2 = r1; //d = 0
	i = r2;  //i = 0
	r1 = d;  //i = d = 0 
	std::cout << i << '\t' << d << std::endl;
	return 0;
}

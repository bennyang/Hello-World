#include <iostream>
int main()
{
	int i =42;
	int *pi = &i;
	std::cout << *pi << '\t' << pi << std::endl;
	*pi = *pi * *pi; //i = i * i;
	std::cout << *pi << '\t' << pi << std::endl;
	return 0;
}

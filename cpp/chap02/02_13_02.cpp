#include <iostream>
int i = 42;
int main()
{
	int i = 100;
	int j = i;
	int j2 = ::i;
	std::cout << j << '\t' << j2 << std::endl;
	return 0;

}

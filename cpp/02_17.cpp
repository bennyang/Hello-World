#include <iostream>
int main()
{
	int i, &ri = i;
	i =5; ri =10;
	std::cout << i << '\t' << ri << std::endl;//i = ri = 10
	return 0;
}

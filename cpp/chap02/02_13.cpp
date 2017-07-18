#include <iostream>
int reused = 42;
int main()
{
	int unique = 0;
	std::cout << reused << "\t" << unique << std::endl;
	int reused = 0;
	std::cout << reused << "\t" << unique << std::endl;
	std::cout << ::reused << "\t" << unique << std::endl;
	return 0;
}

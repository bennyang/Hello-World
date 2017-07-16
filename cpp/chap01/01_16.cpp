#include <iostream>

int main()
{
	int sum = 0, value = 0;
	std::cout << "please enter several numbers:" << std::endl;
	while (std::cin >> value)
		sum += value;
	std::cout << "the sum is : " << sum << std::endl;
	return 0;
}

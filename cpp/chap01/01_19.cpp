#include <iostream>

void print_range(int lo, int hi)
{
	if (lo > hi)
		{
			print_rang(hi, lo)
			return;
		}
	for (int i = lo; i != hi; ++i)
		std::cout << i << " ";	
}

int main()
{
	int low = 0, high = 0;
	std::cout << "Please input two integers:\n";
	std::cin >> low >> high;
	print_range(low, high);
	return 0;
}

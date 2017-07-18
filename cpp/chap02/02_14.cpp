#include <iostream>
int main()
{
	int i = 100, sum = 0;
	for (int i = 0; i != 10; ++i) //此处的i与main作用域中的i不是同一个i
		sum += i;
	std::cout << i << "\t" << sum << std::endl; //此处打印的是main作用域的i
	return 0;
}

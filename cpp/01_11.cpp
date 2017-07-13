#include <iostream>

int main ()
{
  std::cout << " PLease enter two numbers: " << std::endl;
  int low = 0, high = 0;
  std::cin >> low >> high;
    if (low > high) {
    int val =0;
    val = high;
    high = low;
    low =val;
  }
  std::cout << " the numbers between " << low << " and "
	    << high << " : " << std::endl;
  while ( low <= high) {
    std::cout << low << " ";
    ++low;
  }
  std::cout << std::endl;
  return 0;
}

#include <iostream>

void print_rang (int val1, int val2)
{
  if (val1 > val2) {
    int val =0;
    val = val1;
    val1 = val2;
    val2 = val;
  }
  while (val1 <= val2) {
    std::cout << val1 << " ";
    ++val1;
  }
}

int main ()
{
  std::cout << "Please enter two numbers: " << std::endl;
  int low = 0, high =0;
  std::cin >> low >> high;
  print_rang (low, high);
  return 0;
}

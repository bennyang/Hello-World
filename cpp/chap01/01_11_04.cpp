#include <iostream>

void print_rang (int val1, int val2)
{
  if (val1 > val2)
    {
      print_rang (val2, val1);
      return;
    }
  
  for (int i = val1; i <= val2; ++i)
    {
      std::cout << i << " ";
    }
}

int main ()
{
  std::cout << "Please enter two numbers: \n" << std::endl;
  int low = 0, high =0;
  std::cin >> low >> high;
  print_rang (low, high);
  return 0;
}

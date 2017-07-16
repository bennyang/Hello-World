#include <iostream>

int main ()
{
  int sum = 0, val = 50;
  // 只要val小于等于100,while就会持续循环
  while (val <=100){
    sum += val;      //将sum+val赋于sum
    ++val;              //将val加1
  }
  std::cout << "The sum of 50 to 100 inclusive is "
	    << sum << std::endl;
  return 0;
}

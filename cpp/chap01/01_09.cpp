#include <iostream>

int main ()
{
  int sum = 0, val = 1;
  //只要val小于等于10,while循环就会持续执行
  while (val <= 10) {
    sum += val;    //将sum + val 赋于sum
    ++val;            //将val加1
  }
  std::cout << "The sum of 1 to 10 inclusive is "
	    << sum << std::endl;
  return 0;
}

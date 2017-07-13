#include <iostream>

int main ()
{
  int val =10;
  //val 大于等于0,while将持续循环
  while (val >= 0) {
    std::cout << val << std::endl; 
    --val;                 //将val 减1
  }
  
  return 0;
}

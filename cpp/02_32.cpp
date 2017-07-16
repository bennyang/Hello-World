#include <iostream>
using namespace std;

int j = 0;
const int i = 42;
int main()
{
  //const int *p = nullptr;
  constexpr int *q = nullptr;
  constexpr int *np = nullptr;

  //int j = 0;        //j的地址不是一个常量
  //const int i = 42; //i的地址不是一个常量，i和j的定义都需要放在函数体外
  constexpr const int *p = &i;
  constexpr int *p1 = &j;

  int null = 0, *p2 = nullptr;
  return 0;
}

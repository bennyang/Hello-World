#include <iostream>
using namespace std;
int main()
{
  //int i = -1, &r = 0;  //const int &r = 0;
  //int *const p2 =&i2;  //i2未定义
  const int i = 1, &r = 0;  //ok
  //const int *const p3 =&i2;  //i2未定义
  //const int *pi = &i2;  //i2未定义
  //const int &const r2;  //r2不是对象，不可定义为常量
  //const int i2 = i, &r = i;　//i2未定义;const int &r = i;ok
  return 0;
}

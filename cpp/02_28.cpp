#include <iostream>
using namespace std;
int main()
{
  int i, *const cp;  //nok,cp指向int 的常量指针,但未初始化
  int *p1, *const p2;  //nok,p2指向int 的常量指针,但未初始化
  const int ic, &r = ic;  //nok,ic是int常量，但未初始化;r是常量ic的引用
  const int *const p3; //nok,p3是指向int常量的常量指针，但未初始化
  const int *p;  //p指向int常量的指针
  return 0;
}

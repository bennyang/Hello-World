#include <iostream>
using namespace std;
int main()
{
  int i = 1, *const cp;  //nok,cp指向int 的常量指针,但未初始化
  int *p1, *const p2;  //nok,p2指向int 的常量指针,但未初始化
  const int ic = 2, &r = ic;  //nok,ic是int常量，但未初始化;r是常量ic的引用
  const int *const p3; //nok,p3是指向int常量的常量指针，但未初始化
  const int *p;  //p指向int常量的指针

  i = ic;  //ok
  p1 = p3; //nok,p1是指针变量,p3是常量指针
  p1 = &ic;  //nok, p1是指针变量，ic是int常量
  p3 = &ic;  //nok, p3是常量指针
  p2 = p1;   //nok, p2是常量指针
  ic = *p3;  //nok, ic是int常量
  return 0;
}

#include <iostream>
using namespace std;
int main()
{
  //int* ip, i, &r = i;// 指向int的指针, int, int的引用
  int i, *ip = 0;    //int, 地址为0的int指针
  cout << ip << endl;
  cout << *ip << endl;
  int* ip1, ip2;     //int指针, int
  return 0;
}

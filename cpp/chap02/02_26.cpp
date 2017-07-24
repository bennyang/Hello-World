#include <iostream>
using namespace std;
int main()
{
  const int bufSize = 512;
  //const int i = get_size();
  const int j = 42;
  //const int k;//const int k 未初始化
  int ii = 42;
  const int ci = ii;
  int jj = ci;
  const int buf = ii;//const int buf 未初始化
  int cnt = 0;  //ok
  const int sz = cnt;//ok
  ++cnt;      //ok
  //++sz;       //const int sz的值初始化之后，不可改变，++sz nok

  double deval = 3.14;
  const int &ri = deval;
  cout << deval << '\t' << ri << endl;
  
  return 0;
}

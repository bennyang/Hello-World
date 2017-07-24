#include <iostream>
using namespace std;
int main()
{
  /*
  int i = 42, *p = &i, &r = i;
  decltype(r + 0) b;
  decltype(*p) c;
  */
  
  int a = 3, b =4;
  decltype(a) c = a;
  decltype((b)) d = a;
  cout << ++c << endl;
  cout << ++d << endl;
  
  return 0;
}

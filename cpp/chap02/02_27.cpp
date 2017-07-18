#include <iostream>
using namespace std;
int main()
{
  const int ci = 1024;
  //const int &r1 = ci;
  //r1 = 42;
  //const int &r2 = ci;
  double  dval = 3.14;
  const int &ri = dval;
  cout << dval << '\t' << ri << endl;
  int i = 42;
  int &r1 = i;
  const int &r2 = i;
  r1 = 0;
  //r2 = 0;
  cout << i << '\t' << r1 << '\t' << r2 << endl;
  int errNumb = 0;
  int *const curErr = &errNumb;
  const double pi = 3.14159;
  const double *const pip = &pi;
  cout << *curErr << endl;
  if (*curErr) {
    // errorHandler(); //没有声明
    *curErr = 0;
  }
  



  return 0;
}

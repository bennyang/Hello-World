#include <iostream>
using namespace std;
int main()
{
  int i2 = 100;
  int i = -1, &r = i;
  const int i1 = -1, &r1 = i1;
  int *const p2 = &i2;
  const int & r2 = i2;
  double i3 =3.15;
  const int &r3 = i3;
  //int *const p3 = &i3;
  cout << r3 << endl;
  //cout << *p3 << endl;
  //cout << p3 << endl;




  /*
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
  cout << i << '\t' << r2 << endl;
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
  
  const int *pp;
  const int *ppp = nullptr;
  */
  return 0;
}

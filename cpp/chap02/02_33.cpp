#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
  /*
  typedef double wages;
  typedef wages base, *p0;
  using SI = Sales_item;
  SI val1, val2;
  auto tiem = val1 + val2;
  */
  

  int i = 0, &r = i; // int
  auto a = r; //　int

  const int ci = i, &cr = ci;
  auto b = ci; // int
  auto c = cr; // int
  auto d = &i; // * int
  auto e = &ci;// * const int

  const auto f = ci; // const int
  auto &g = ci;      // referent to const int
  //auto &h = 42;      // nok
  const auto &j = 42;// referent to 42

  auto k = ci, &l = i;    // int
  auto &m = ci, *p = &ci; // referent to const int
  //auto &n = i, *p2 = &ci; // n is referent to int, p2 is point to const int

  a = 42; // int
  b = 42; // int
  c = 42; // int
  e = &i;// * int
  //f = 42; // const int 
  //g = 42; // referent to const int


  return 0;
}

#include <iostream>
using namespace std;
int main()
{
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
  //e = &42;// * int
  //f = 42; // const int 
  //g = 42; // referent to const int

  return 0;
}

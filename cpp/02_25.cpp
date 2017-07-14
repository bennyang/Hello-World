#include <iostream>
using namespace std;
int main()
{
  //int i =1024, *p = &i, &r = i;
  //int* p;
  int* p1, p2;
  int *p3, *p4;
  int ival = 1024;
  int *pi = &ival;
  int **ppi = &pi;
  cout << "the value of ival\n"
       << "direct value: " << ival << "\n"
       << "indirect value: " << *pi << "\n"
       << "double indirect value: " << **ppi
       << endl;
  int i = 42;
  int *p = &i;
  int *&r = p;
  r = &i;
  *r = 0;
  cout << i << endl;
  
  return 0;
}

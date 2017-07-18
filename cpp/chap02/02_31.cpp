#include <iostream>
using namespace std;
int main()
{
  
  const int v2 = 0; // top level
  int v1 = v2;      
  int *p1 = &v1, &r = v1; 
  const int *p2 = &v2, *const p3 = &i, &r2 = v2; //p2 low level const, p3 top&low level const, r2 low level const

  r1 = r2; //ok
  p1 = p2; //nok
  p2 = p1; //ok
  p1 = p3; //nok
  p2 = p3; //ok
  
  return 0;
}

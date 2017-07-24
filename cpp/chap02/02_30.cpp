#include <iostream>
using namespace std;
int main()
{

  const int v2 = 0;
  int v1 = v2;
  int *p1 = &v1, &r1 = v1;
  const int *p2 = &v2, *const p3 = &v2, &r2 = v2;

  r1 = v2;
  //p1 = p2; // const *int 
  p2 = p1;
  //p1 = p3;
  p2 = p3;


  /*
  int i = 1;
  const int i2 = 2;
  i = i2;
  cout << i << '\t' << i2 << endl;

  const int v2 = 0; // top level
  int v1 = v2;      
  int *p1 = &v1, &r = v1; 
  const int *p2 = &v2, *const p3 = &i, &r2 = v2; //p2 low level const, p3 top&low level const, r2 low level const
  */

  return 0;
  
}

#include <iostream>
using namespace std;
int main()
{
  //int* ip, i, &r = i;// ָ��int��ָ��, int, int������
  int i, *ip = 0;    //int, ��ַΪ0��intָ��
  cout << ip << endl;
  cout << *ip << endl;
  int* ip1, ip2;     //intָ��, int
  return 0;
}

#include <iostream>
int main()
{
	int i =42;
	void *p = &i;  //void* 可用于存放任意对象的地址
	int *pi = &i; //类型不符,指针变量名不合法，不可以数字开头
	return 0;
}

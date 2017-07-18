#include <iostream>
int main()
{
	int i =0;
	int* dp =&i; //指针类型与指向的变量类型不符
	int *ip = &i; //指针初始，初始值需要为指针类型
	int *p = &i; 
	return 0;
}

#include <iostream>
int main()
{
	int *ip1, *ip2;
	std::cout << ip1 << '\t' << ip2 << std::endl;
	int ival = 42;
	int *p = &ival;
	std::cout << *p << '\t' << p << std::endl;
	double dval;
	double *pd = &dval;
	double *pd2 = pd;
	//double *pi = pd;
	//pi = &dval;
	//std::cout << p << '\t' << pd << '\t' << pd2 << '\t' << pi << std::endl;

	int *p1 = nullptr;
	int *p2 = 0;
	int *p3 = NULL;
	std::cout << p1 << '\t' << std::endl;
	int i = 42;
	//int *pi = 0;
	int *pi2 = &i;
	int *pi3;
	pi3 = pi2;
	pi2 = 0;
	//int ival = 1024;
	int *pi =0;
	//int *pi2 =&ival;
	if (pi);
	if (pi2);
	//double obj = 3.14, *pd = &obj;
	//void *pv = &obj;
	//pv = pd;

	int a = 100, *pa = &a;
	*pa = 200;
	pa = nullptr;
 
	return 0;	
}


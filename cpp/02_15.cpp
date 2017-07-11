#include <iostream>
int main()
{
	int ival = 1024;
	int &refVal = ival;
	//int &refVal2;
	refVal = 2;
	int ii = refVal;
	int &refVal3 =refVal;
	int i = refVal;
	int i1 = 1024, i2 = 20148;
	int &r = i, &r2 = i2;
	int i3 = 1024, &ri = i3;
	int &r3 = i3, &r4 =i2;
	//int &refVal4 = 10;
	double dval = 3.14;
	double  &refVal5 = dval;
	return 0;
}

#include <iostream>
#include "Sales_item.h"
int main()
{
	int sum = 0, value,
		units_sold = 0;
	Sales_item item;
	std::string book("0-201-78345-x");
	double price = 109.99, discount = price * 0.16;
	//	double salePrice = applyDiscount(price, discount);
	//	int units_sold = 0;
	//	int units_sold = (0);
	//	int units_sold(0);
	//	int units_sold{0};
	long double ld = 3.1415926536; //1d改为ld
	long double a{ld}, b = {ld};   //int改为long double
	long double c{ld}, d = ld;     //int改为long double
	int input_value;               
	std::cin >> input_value;       //先定义，后使用
	float i = {3.14};              //int 改为float
	double wage, salary = wage = 9999.99;//先定义wage，后引用
	//	float i = 3.14;            //int 改为float
	return 0;
}

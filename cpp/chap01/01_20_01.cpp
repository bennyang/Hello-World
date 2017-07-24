#include <iostream>
//#include <string>
#include "Sales_data.h"
using namespace std;
/*
struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
};
*/
int main()
{
	double price =0;
	for (Sales_data data; cin >> data.bookNo >> data.units_sold >> price; cout << data.bookNo << " " << data.units_sold << " " << data.units_sold * price << " " << price << endl);
	return 0;
}

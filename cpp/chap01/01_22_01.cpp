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
	Sales_data total;
	double price;
	if (cin >> total.bookNo >> total.units_sold >> price){
		
		for (Sales_data data; cin >> data.bookNo >> data.units_sold >> price; ){
			if (total.bookNo == data.bookNo) {
				data.revenue = data.units_sold * price;
				total.revenue += data.revenue;
				total.units_sold += data.units_sold;
			}else {
				cerr << "Data must refer to the same ISBN" << endl;
				return -1;
			}
		}
	}
	if (total.units_sold != 0)
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " " << total.revenue/total.units_sold << endl;
	else {
		cerr << "No data!" << endl;
		return -1;
	}
	return 0;
}

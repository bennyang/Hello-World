#include <iostream>
//#include <string>
#include "Sales_data.h"
using namespace std;
/*
struct Sales_data {
	string bookNo;
	unsigned units_sold = 0 ;
	double revenue = 0;
};
*/
int main()
{
	Sales_data total;
	double price = 0;
	if (cin >> total.bookNo >> total.units_sold >> price){
		total.revenue = total.units_sold * price;
		for (Sales_data trans; cin >> trans.bookNo >> trans.units_sold >> price;){
			trans.revenue = trans.units_sold * price;
			if (trans.bookNo == total.bookNo){
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}else {
				cout << total.bookNo << " " << total.units_sold
					 << " " << total.revenue << " " << total.revenue/total.units_sold
					 << endl;
				total.bookNo = trans.bookNo;
				total.units_sold = trans.units_sold;
				total.revenue = trans.revenue;
			}
			
		}
	}else {
		cerr << "No data?" << endl;
		return -1;
	}
	cout << total.bookNo << " " << total.units_sold
		 << " " << total.revenue << " " << total.revenue/total.units_sold
		 << endl;
	return 0;
}
	

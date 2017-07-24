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
//存在 bug: 输入1122回车，不会报错
int main()
{
	Sales_data currData;
	double price;
	int cnt = 0;
	if (cin >> currData.bookNo >> currData.units_sold >> price){
		cnt = 1;
		for (Sales_data valData; cin >> valData.bookNo >> valData.units_sold >> price;){
			if (valData.bookNo == currData.bookNo)
				cnt += 1;
			else {
				cout << currData.bookNo << " " << "occurs"
					 << " " << cnt << endl;
				cnt = 1;
				currData.bookNo = valData.bookNo;
				currData.units_sold = valData.units_sold;
			}
		}
	}else {
		cerr << "No Data?" << endl;
		return -1;
	}
	
	if (cnt != 0 ){
		cout << currData.bookNo << " " << "occurs"
			 << " " << cnt << endl;
		return 0;
	}else {
		cerr << "error enter" << endl;
		return -1;
	}
}
	

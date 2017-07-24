#include <iostream>
#include <string>
#include "Sales_item.h"
using namespace std;

int main()
{
	for (Sales_item item; cin >> item; cout << item);
	return 0;
}

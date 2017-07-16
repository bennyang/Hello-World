#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item currItem, valItem;
	int cnt = 0;
	if (std::cin >> currItem){
		cnt = 1; 
		while (std::cin >> valItem){
			if (valItem.isbn() == currItem.isbn())
				++cnt;
			else { 
				std::cout << currItem.isbn() << " occurs "
						  << cnt << std::endl;
				currItem = valItem;
				cnt = 1;
			}
		}
	}
	std::cout << currItem.isbn() << " occurs "
			  << cnt << std::endl;
	return 0;
}

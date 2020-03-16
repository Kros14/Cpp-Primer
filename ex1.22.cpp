#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item totalItems,item;
	cin >> totalItems;          //初始化totalItems的值，并且得到ISBN。
	while (cin >> item)
		totalItems += item;         //预设输入的ISBN是相同的，直接将其累加。
	cout << "totalItems is : " << totalItems << endl;
	return 0;
}

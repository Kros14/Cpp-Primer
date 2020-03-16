#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item item1, item2;
	cin >> item1 >> item2;
	if (item1.isbn() == item2.isbn())     //比较item1和item2的ISBN，注意要用成员函数isbn()，返回值为ISBN。
	{
		cout << item1 + item2 << endl;
	}
	else
	{
		cerr << "Different ISBN." << endl;
	}
	return 0;
}

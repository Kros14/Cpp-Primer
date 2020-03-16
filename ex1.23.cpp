#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	Sales_item currItem, item;
	if (cin >> currItem)
	{
		int cnt = 1;
		while (cin >> item)
		{
			if (currItem.isbn() == item.isbn())
				++cnt;
			else
			{
				cout << currItem << " occurs " << cnt << " times." << endl;
				currItem = item;
				cnt = 1;
			}
		}
		std::cout << currItem << " occurs " << cnt << " times." << endl;
	}
	return 0;
}


/*Warning:
cnt能够正常计数，而currItem只显示当前赋值的currItem，需要注意。以后可以修改
*/

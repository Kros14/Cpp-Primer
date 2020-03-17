#include <iostream>
#include "Sales_item.h"
#include<math.h>
using namespace std;
int main()
{
	unsigned u = 10, u2 = 42;
	cout << u2 - u << endl;
	cout << u - u2 << endl;	//结果为-32，类型为unsigned，所以最后结果是-32+4294967296=4294967264

	int i = 10, i2 = 42;
	cout << i2 - i << endl;
	cout << i - i2 << endl;
	cout << i - u << endl;	//i是int u是unsigned，所以将i转化为unsigned类型，结果是0
	cout << u - i << endl;	//同上
}

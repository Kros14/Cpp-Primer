#include <iostream>
#include "Sales_item.h"
#include <math.h>
#include <windows.h>
#include <cstdlib>
using namespace std;
int main()
{
	int a = 1, b = 2;
	int* pa = &a;
	int* pb = &b;
	*pa = 3;
	cout << "a=" << a << endl;;
	pb = pa;
	cout << "pb=" << *pb << endl << "b=" << b << endl<<"a="<<a<<endl;
	return 0;
}

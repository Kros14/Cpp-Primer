#include <iostream>
#include "Sales_item.h"
using namespace std;
int main()
{
	for (				//在for循环中实现输入和输出
       Sales_item item;			//定义一个Sales_item类型的item
       cin >> item; 			//原本是循环条件，现在令其作为输入。原理是当循环条件为1时，for循环会继续进行，cin>>item进行一次返回值是1。
       cout << "The record is : "<<item << endl	//原本是表达式，现在令其作为输出，循环结束后表达式会进行一次
       );
	return 0;
}

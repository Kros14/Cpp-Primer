//编写一段程序，创建一个含有10个整数的vector对象，然后使用迭代器将所有元素的值比都变成原来的两倍。输出vector对象的内容，检验程序是否正确。

#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	vector<int>	 v{ 1,2,3,4,5,6,7,8,9,10 };
	for (auto it = v.begin(); it != v.end(); it++)
		*it *= 2;
	for (auto c : v)
		cout << c<<" ";
	return 0;
}

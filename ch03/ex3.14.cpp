//编写一段程序，用cin读入一组整数并把它们存入一个vector对象。

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	vector<int>v2;
	int i;
	while (cin >> i)
		v2.push_back(i);
	return 0;
}

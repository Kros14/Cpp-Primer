//读入一组整数，并把它们存入一个vector对象，将每对相邻整数的和输出出来。改写你的程序，这次要求先输出第1个和最后1个元素的和，接着输出第2个和倒数第2个元素的和，以此类推。
#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
	int i;
	vector<int> v;
	while (cin >> i)
		v.push_back(i);
	for (unsigned i = 0; i < v.size() - 1; ++i)
		cout << v[i] + v[i + 1] << endl;

	cout << "--------------------------------------" << endl;
	
	unsigned m = 0;
	unsigned n = v.size() - 1;
	while (m < n)
	{
		cout << v[m] + v[n] << endl;
		m++;
		n--;
	}
  //不输出奇数size的最中间一项。
	return 0;
}

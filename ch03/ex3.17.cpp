#从cin读入一组词并把它们存入一个vector对象，然后设法把所有词都改写成大写形式。输出改变后的结果，每个词占一行。

#include <iostream>
#include <string>
#include <cctype>
#include <vector>

using namespace std;

int main()
{
	string s;
	vector<string> v;
	while (cin >> s)
		v.push_back(s);
	for (auto& str : v)
		for (auto& a : str)
			a = toupper(a);
	for (auto c : v)
		cout << c << endl;
	return 0;
}

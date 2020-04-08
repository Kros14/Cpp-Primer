//编写一段程序，用cin读入一组字符串并把它们存入一个vector对象。

#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	string word;
	vector<string>  text;
	while (cin >> word)
		text.push_back(word);
	return 0;
}

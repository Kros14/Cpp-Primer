#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	vector<int>v{ 1,2,3,4,5,6,7,8,9 };
	for (auto it = v.begin(); it != v.end() - 1; ++it)
		cout << *it + *(it + 1) << " ";
	
	cout << endl<< "-----------------------------------------" << endl;
	auto it1 = v.begin();
	auto it2 = v.end()-1;
	while (it1 < it2)
	{
		cout << *it1 + *it2 << " ";
		++it1;
		--it2;
	}
	return 0;
}

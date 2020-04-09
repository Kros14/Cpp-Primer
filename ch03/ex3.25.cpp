#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	vector<unsigned>scores(11, 0);
	unsigned grade;
	auto it = scores.begin();
	while (cin >> grade)
	{
		if (grade <= 100)
			++* (it + grade / 10);
	}
	for (auto c : scores)
		cout << c<<" ";
	return 0;
}

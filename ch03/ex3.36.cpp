//编写一段程序，比较两个数组是否相等。再写一段程序，比较两个vector对象是否相等。

//数组

#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    int a1[] = { 0,1,2,3,4 };
    int a2[] = { 0,1,2,3,2 };
    auto s1 = size(a1), s2 = size(a2);
    if (s1!=s2)
    {
        cout << "Not equal" << endl;
        return 0;
    }

    for (size_t i = 0; i < s1; ++i)
    {
        if (a1[i] != a2[i]) 
        {
            cout << "Same size but not same value" << endl;
            return 0;
        } 
    }
    cout << "Equal arrays\n";

    return 0;
}







//vector

#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    vector<int>v1 = { 0,1,2,3,4,5 };
    vector<int>v2 = { 0,1,2,3,4,4 };
    if (v1 == v2)
        cout << "equal vectors";
    else
        cout << "not equal";
    return 0;
}

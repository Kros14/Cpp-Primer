//编写一段程序，利用指针将数组中的元素置为零。

#include <vector>
#include <iterator>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    int a[] = { 0,1,2,3,4,5,6,7,8,9 };
    int* pb = begin(a);
    int* pe = end(a);
    while (pb < pe)
    {
        *pb = 0;
        ++pb;
    }
    for (auto c : a)
        cout << c;
    return 0;
}

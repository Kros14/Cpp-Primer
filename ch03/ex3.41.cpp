//编写一段程序，用整型数组初始化一个vector对象。

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    const int a[] = { 1,2,3,4,5 };
    vector<int>ivec(begin(a),end(a));

}

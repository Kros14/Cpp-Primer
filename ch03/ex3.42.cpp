//编写一段程序，将含有整数元素的vector对象拷贝给一个整型数组。

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>ivec{ 0,1,2,3,4,5 };

    int a[10]={ 0 };  //使用一个大小为10的数组来保存。

    for (size_t i = 0; i < ivec.size(); ++i)
        a[i] = ivec[i];
    for (int c:a)   //会输出后面的0.
        cout << c;
    return 0;
}

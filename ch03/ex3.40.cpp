//编写一段程序，定义两个字符数组并用字符串字面值初始化它们；接着再定义一个字符数组存放前面两个数组连接后的结果。
//使用strcpy和strcat把前两个数组的内容拷贝到第三个数组中。

#include <iostream>
using namespace std;

int main()
{
    const char c1[] = "This is c1";
    const char c2[] = "This is c2";
    char c3[50];
    strcpy_s(c3, c1);
    strcat_s(c3, " and ");
    strcat_s(c3, c2);
    cout << c3;
    return 0;
}

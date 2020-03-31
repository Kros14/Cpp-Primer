//编写一段程序，适用范围for语句将字符串内的所有字符用X替代。

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "Hello World!";
    for (auto& c : s)
        c ='X';
    cout << s << endl;
    return 0;
}

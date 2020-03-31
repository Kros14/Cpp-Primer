//分别用while循环和for循环重写第一题的程序，你觉得哪种形式更好呢？为什么？

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "Hello World!";
    for (decltype(s.size()) index = 0; index < s.size(); ++index)
        s[index] = 'X';
    cout << s << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "Hello World!";
    decltype(s.size()) index = 0;
    while (index < s.size())
    {
        s[index] = 'X';
        ++index;
    }
    cout << s << endl;
    return 0;
}

//for循环更简单，控制变量不需要单独换行写。

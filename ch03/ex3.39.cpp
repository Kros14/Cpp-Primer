//编写一段程序，比较两个string对象。再编写一段程序，比较两个C风格字符串的内容。

//string对象

#include <iostream>
using namespace std;

int main()
{
    string s1{ "Hello World" };
    string s2{ "Hello World" };
    if (s1 == s2)
        cout << "Same strings\n";
    else
        cout << "Defferent strings\n";
    return 0;
}

//C风格字符串

#include <iostream>
using namespace std;

int main()
{
    const char c1[] = "Hello";
    const char c2[] = "Hello";
    if (strcmp(c1, c2) == 0)
        cout << "Same Cstrings\n";
    else
        cout << "Different Cstrings\n";
    return 0;

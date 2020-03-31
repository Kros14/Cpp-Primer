//请编写一段程序读入两个字符串，比较其是否相等并输出结果。如果不相等，输出较大的那个字符串，改写上述程序，比较输入的两个字符串是否等长，如果不等长，输出长度较大的那个字符串。

#include <iostream>
#include<string>
using namespace std;
int main()
{
  string s1,s2;
  getline(cin,s1);
  getline(cin,s2);
  if(s1==s2)
    cout<<s1<<endl;
  else
    (s1<s2)?(cout<<s2<<endl):(cout<<s1<<endl);
  return 0; 
}

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    unsigned size1 = s1.size();
    unsigned size2 = s2.size();
    if (size1 == size2)
        cout << "The strings have same size."<<endl;
    else
    (size1 > size2) ? (cout << s1<<endl) :( cout << s2<<endl);
    return 0;
}

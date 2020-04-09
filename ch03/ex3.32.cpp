#include <vector>
#include <iterator>
#include <string>
#include <iostream>

using namespace std;

int main()
{
    //array
    constexpr size_t size = 10;
    int a[size];
    for (size_t c = 0; c < size; ++c)
        a[c] = (int)c;
    int b[size];
    for (size_t c = 0; c < size; ++c)
        b[c] = a[c];

    //vector
    vector<int>v1;
    for (int i = 0; i != 10; ++i)
        v1.push_back(i);
    vector<int>v2(v1);
    
    return 0;
}

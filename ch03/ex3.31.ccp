//编写一段程序：定义一个含有10个int的数组，令每个元素的值就是其下标值。

using namespace std;

int main()
{

    constexpr size_t size = 10;
    int a[size];
    for (size_t c = 0; c < size; ++c)
        a[c] = (int)c;
    return 0;
}

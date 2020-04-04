//给你n个整数，求他们中所有奇数的乘积。
//输入数据包含多个测试实例，每个测试实例占一行，每行的第一个数为n，表示本组数据一共有n个，接着是n个整数，你可以假设每组数据必定至少存在一个奇数。
#include <iostream>

using namespace std;

int main()
{
    int n, sum, i, a;
    while (cin >> n)
    {
        for (sum = 1, i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2 != 0)
                sum *= a;
        }
        cout << sum << endl;
    }
    return 0;
}

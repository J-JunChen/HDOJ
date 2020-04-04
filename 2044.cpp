// 一只小蜜蜂:又是斐波那契数列，但利用数组计算而不是递归函数

#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    __int64 d[51] = { //要用long long int型
        1,
        1,
        2,
    };
    for (int i = 3; i < 51; i++) //斐波那契数列数组
        d[i] = d[i - 1] + d[i - 2];
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            cout << d[b - a] << endl;                                                                                                                                                                                                                                    
        }
    }
                                                                                                   
    return 0;
}

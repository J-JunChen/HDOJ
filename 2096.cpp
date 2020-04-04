// 小明 A+B

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int x, y, n;
    while ((scanf("%d", &n) != EOF))
    {
        while (n--)
        {
            cin >> x >> y;
            cout << (x % 100 + y % 100) % 100 << endl; //对于大于等于100的整数, 小明仅保留该数的最后两位进行计算, 如果计算结果大于等于100, 那么小明也仅保留计算结果的最后两位.
        }
    }

    return 0;
}
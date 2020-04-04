//给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和。

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned int m, n;
    unsigned int i, x, y;
    while (~scanf("%d %d", &m, &n))
    {
        if (m > n)
            swap(m, n); //注意m有可能大于n
        for (i = m, x = 0, y = 0; i <= n; i++)
        {
            if (i % 2 == 0)
                x += pow(i, 2);
            else
                y += pow(i, 3);
        }
        cout << x << " " << y << endl;
    }
}
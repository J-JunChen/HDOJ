// 输出A^B最后三位表示的整数
// 利用快速幂解决

#include <iostream>
#include <cstdio>
#include <cmath>
typedef long long LL;
using namespace std;

LL binaryPow(LL a, LL b, LL m)
{
    if (b == 0)
        return 1;
    if (b % 2 == 1)
        return a * binaryPow(a, b - 1, m) % m;
    else
    {
        LL mul = binaryPow(a, b / 2, m);
        return mul * mul % m;
    }
}

int main()
{
    LL a, b;
    while (cin >> a >> b)
    {
        if (a != 0 || b != 0)
        {
            cout<<binaryPow(a,b,1000)<<endl;
        }
    }

    return 0;
}
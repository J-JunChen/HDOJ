// 时针和分针的夹角，夹角范围（0——180）
// 时针走：30°/h = 0.5°/min = (1/120)°/s
// 分针走：6°/min = (1/10)°/s

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main()
{
    int n;
    double h, m, s, sum;
    // int degree = 6; //每分钟6°
    while ((scanf("%d", &n) != EOF))
    {
        while (n--)
        {
            cin >> h >> m >> s;
            if (h > 12)
                h = h - 12;
            sum = fabs(h * 30 - 11 * m / 2 - 11 * s / 120);
            printf("%d\n", (sum > 180 ? int(360 - sum) : int(sum))); //取整数部分，即不是四舍五入，int强制转换，舍去小数部分，只取整数部分
        }
    }

    return 0;
}
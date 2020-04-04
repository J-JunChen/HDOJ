// 算菜价，这道题完全是格式问题

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double sum = 0, d, n;

    while (scanf("%*s") != EOF) //输入菜名字，%*s算省去赋值
    {
        scanf("%lf%lf", &n, &d);
        sum += n * d;
    }
    printf("%.1f\n", sum);

    return 0;
}
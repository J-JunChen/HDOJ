// 计算A1

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, i;
    double a0, an1, a1;
    double a[3000];
    while (scanf("%d", &n) != EOF)
    {
        /* code */
        cin >> a0 >> an1;
        for (a1 = i = 0; i < n; i++)
        {
            cin >> a[i]; //a1->an
            a1 += (n - i) * 2 * a[i];
        }
        a1 *= -1.00;
        a1 += n * a0 + an1;
        printf("%.2f\n", a1 / (n + 1));
    }

    return 0;
}
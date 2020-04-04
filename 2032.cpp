// 杨辉三角

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n, i, j;
    int YanHui[30];
    while (cin >> n)
    {
        memset(YanHui, 0, sizeof(YanHui));
        YanHui[0] = 1;
        for (i = 0; i < n; i++)
        {
            cout << "1";
            for (j = i; j > 0; j--)
            {
                YanHui[j] += YanHui[j - 1]; //这个是关键
            }
            for (j = 1; j <= i; j++)
            {
                cout << " " << YanHui[j];
            }
            putchar('\n');
        }

        putchar('\n');
    }

    return 0;
}
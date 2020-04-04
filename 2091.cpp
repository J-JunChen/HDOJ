// 空心三角形

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char a;
    int n, i, j, c = 0;
    while ((a = getchar()) != '@')
    {
        if (c++)
            printf("\n"); //每行前面，除了第一行输出不需要空行之外。
        cin >> n;
        for (j = n; j > 1; j--)
        {
            for (i = 1; i <= 2 * n - 1; i++)
            {
                if (i == j || ((i + j) / 2 == n && (i + j) % 2 == 0))
                    putchar(a);
                else
                    putchar(' ');
            }
            putchar('\n');
        }
        for (i = 0; i < 2 * n - 1; i++)
        {
            putchar(a);
        }
        printf("\n");
        getchar();
    }

    return 0;
}
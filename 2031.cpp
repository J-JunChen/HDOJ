// 输入一个十进制数N，将它转换成R进制数输出。
//利用栈，

#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;
void ttor(int n, int r)
{
    if (n)
    {
        ttor(n / r, r);
        if (n % r > 9)
            putchar(n % r - 10 + 'A'); //putchar输出字符
        else
        {
            putchar(n % r + '0');
        }

        // cout << (n % r > 9 ? n % r - 10 + 'A' : n % r + '0');
    }
}

// int main()
// {
//     int n, m;
//     while (cin >> n >> m)
//     {
//         if (n == 0)
//         {
//             putchar('0');
//         }
//         else if (n > 0)
//         {
//             ttor(n, m);
//         }
//         else
//         {
//             putchar('-');
//             ttor(-n, m);
//         }
//         putchar('\n');
//     }

//     return 0;
// }

char IntToChar(int x)
{
    if (x < 10)
        return x + '0';
    else
        return x - 10 + 'A';
}

int CharToInt(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    else
        return c - 'A' + 10;
}

int main()
{
    int m, n, flag;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        if (n == 0)
        {
            putchar('0');
        }
        else
        {
            flag = 0;
            vector<char> answer;
            if (m < 0)
            {
                m = -m;
                flag = 1;
            }
            while (m != 0)
            {
                answer.push_back(IntToChar(m % n));
                m /= n;
            }
            if (flag)
                printf("-");
            for (int i = answer.size() - 1; i >= 0; i--)
            {
                printf("%c", answer[i]);
            }
            printf("\n");
        }
    }

    return 0;
}

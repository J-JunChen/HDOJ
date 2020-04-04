// 整数的尾数

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main()
{
    int a, b, i, sum;
    bool f1;
    while ((scanf("%d%d", &a, &b) != EOF && a + b))
    {
        f1 = false;
        for (i = 0; i < 100; i++)
        {
            sum = a * 100 + i;
            if (sum % b == 0)
            {
                if (!f1) //同组数据的输出，其每个尾数之间空一格，行末没有空格。
                {
                    printf("%02d", i);
                    f1 = true;
                }
                else
                    printf(" %02d", i); //输出00
            }
        }
        printf("\n");
    }

    return 0;
}
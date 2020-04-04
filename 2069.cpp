// Coin Change

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int c50, c25, c10, c5, c1;
    int data[251] = {0}; //必须初始化
    int n;
    for (int i = 0; i < 251; i++)
        for (c50 = 0; c50 * 50 <= i; c50++)
            for (c25 = 0; c50 * 50 + c25 * 25 <= i; c25++)
                for (c10 = 0; c50 * 50 + c25 * 25 + c10 * 10 <= i; c10++)
                    for (c5 = 0; c50 * 50 + c25 * 25 + c10 * 10 + c5 * 5 <= i; c5++)
                    {
                        c1 = i - (c50 * 50 + c25 * 25 + c10 * 10 + c5 * 5);
                        if (c1 + c5 + c10 + c25 + c50 <= 100)
                            data[i]++;
                    }
    while (scanf("%d", &n) != EOF)
    {
        printf("%d\n", data[n]);
    }

    return 0;
}
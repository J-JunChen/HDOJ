// 亲和数

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int Fun(int a)
{
    int end = sqrt(a); // 很奇怪，上界为什么不能用sqrt(a)，由题目就知道，并不是求是否为素数。
    int sum = 1;
    for (int i = 2; i <= a/2; i++) //从2开始，sqrt(n)结束
    {
        if (a % i == 0)
            sum += i;
    }
    return sum;
}

int main()
{
    int n;
    int data[2];
    while (scanf("%d", &n) != EOF)
    {
        while (n--)
        {
            cin >> data[0] >> data[1]; //输入两个整数
            if ((Fun(data[0]) == data[1]) && (Fun(data[1]) == data[0]))
                cout << "YES" << endl;
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
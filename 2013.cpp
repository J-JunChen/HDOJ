//第一天悟空吃掉桃子总数一半多一个，第二天又将剩下的桃子吃掉一半多一个，以后每天吃掉前一天剩下的一半多一个，到第n天准备吃的时候只剩下一个桃子。聪明的你，请帮悟空算一下，他第一天开始吃的时候桃子一共有多少个呢？
// INPUT: 输入数据有多组，每组占一行，包含一个正整数n（1<n<30），表示只剩下一个桃子的时候是在第n天发生的。
// OUTPUT: 对于每组输入数据，输出第一天开始吃的时候桃子的总数，每个测试实例占一行。

#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    while (cin >> n)
    {
        sum = 1;
        for (int i = n; i > 1; i--)
        {
            sum = (sum + 1) * 2;
        }
        cout << sum << endl;
    }
    return 0;
}
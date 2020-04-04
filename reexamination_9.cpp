// 完数定义：大于1的正整数，其所有因子之和 = 这个数

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int x, bound, sum;
    cin >> x;
    bound = x / 2; //所有因子的上界
    sum = 0;       //所有因子的总和
    for (int i = 1; i <= bound; i++)
    {
        if (x % i == 0)
            sum += i;
    }
    if (sum == x)
        cout << x << " 是完数" << endl;
    else
        cout << x << " 不是完数" << endl;
    return 0;
}
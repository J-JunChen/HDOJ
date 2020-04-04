// 求两个正整数的最大公约数

#include <iostream>
#include <cstdio>

using namespace std;

int GCD(int x, int y)
{
    if (y == 0)
        return x;
    else
        return GCD(y, x % y);
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << GCD(x, y) << endl;
    return 0;
}
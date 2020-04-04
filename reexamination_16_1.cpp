//1.判断一个数N是否是素数，是的话输出“YES”，否则输出“NO”。
//输入：
// 1000000007
// 100
// 输出：
// YES
// NO

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool Judge(int x)
{ //判断是否是素数
    if (x < 2)
        return false;
    else
    {
        int bound = sqrt(x);
        for (int i = 2; i <= bound; i++)
        {
            if (x % i == 0)
                return false;
        }
        return true;
    }
}

int main()
{

    int x;
    while (scanf("%d", &x) != EOF)
    {
        if (Judge(x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
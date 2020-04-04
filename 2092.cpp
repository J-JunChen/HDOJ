// 整数解

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


int main()
{
    double n, m, i, j;
    double x1, x2, judge;
    bool flag;
    while (cin >> n >> m, n + m)
    {

        flag = false;
   
        judge = pow(n, 2) - 4 * m;
        if (judge >= 0)
        {
            x1 = (n + sqrt(judge)) / 2;
            x2 = (n - sqrt(judge)) / 2;
            if (int(x1) == x1 || int(x2) == x2) //判断是否是整数
                flag = true;
        }

        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
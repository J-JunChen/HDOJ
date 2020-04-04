//对于表达式n^2+n+41，当n在（x,y）范围内取整数值时（包括x,y）(-39<=x<y<=50)，判定该表达式的值是否都为素数。
// 素数定义：除了1和自身，不能被其他自然数整除
// 算法思路：m与2~sqrt(m)之间的任何一个整数相除

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, n, m;
    bool flag;
    while (cin >> x >> y)
    {
        if (x != 0 || y != 0)
        {
            flag = true;

            for (n = x; n <= y; n++)
            {
                m = pow(n, 2) + n + 41;
                for (int i = 2; i <= int(sqrt(m)); i++)
                {
                    if (m % i == 0)
                        flag = false; //如果能整除，则求余为0,则不是素数
                }
            }
            if (flag)
                cout << "OK" << endl;
            else
                cout << "Sorry" << endl;
        }
    }

    return 0;
}

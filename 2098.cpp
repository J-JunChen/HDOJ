// 分拆素数和

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool Judge(int x)
{ //判断是否是素数
    int bound = sqrt(x);
    for (int i = 2; i <= bound; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main()
{
    int x, i, temp, num;
    while (cin >> x, x)
    {
        temp = x / 2;
        num = 0;
        for (i = 2; i < temp; i++) //0和1都不是素数
        {
            if (Judge(i) && Judge(x - i))
                num++;
        }
        cout << num << endl;
    }

    return 0;
}
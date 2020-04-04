// 春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上有个水仙花数，他是这样定义的：
// “水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153=1^3+5^3+3^3。
// 现在要求输出所有在m和n范围内的水仙花数。
// INPUT: 输入数据有多组，每组占一行，包括两个整数m和n（100<=m<=n<=999）。

#include <iostream>
#include <cmath>
using namespace std;

int sxh(int m) //判断m是否是水仙花数的函数
{
	int sum = 0;
	int n = m;
	while (n)
	{
		sum += (n % 10)*(n % 10)*(n % 10);
		n /= 10;
	}
	return sum == m;
}


int main()
{
    int m, n;
    int a, b, c;
    bool flag, No_1;
    while (cin >> m >> n)
    {
        flag = false, No_1 = true; //每一次都要判断，即需要在区间内重新赋值
        for (int i = m; i <= n; i++)
        {
            a = i / 100;
            b = (i % 100) / 10;
            c = i % 10;
            if (i == pow(a, 3) + pow(b, 3) + pow(c, 3))
            {
                flag = true;
                if (No_1)
                {
                    cout << i;
                    No_1 = false;
                }
                else
                    cout <<" "<< i;
            }
        }
        if (flag == false)
            cout << "no" << endl;
        else
        {
            cout << endl;
        }
    }

    return 0;
}
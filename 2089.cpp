// 不要所有含有“4”和“62”的号码

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    int n, m, num;
    int *a = new int [1000000]; //动态申请数组
    string str;
    a[0]=0;
    for (int i = 1; i < 1000000; i++)
    {
        str = to_string(i);
        if (str.find("4") == -1 && str.find("64") == -1)
        {
            a[i] += a[i - 1] + 1;
            continue;
        }
        a[i] = a[i - 1];
    }
    while (scanf("%d%d", &n, &m), n + m)
    {
        int sum = m - n + 1;
        num = a[m] - a[n-1];
        cout << num << endl;
    }

    return 0;
}
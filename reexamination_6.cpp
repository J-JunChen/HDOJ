// 输入n个字符串，将它们按字母由小到大的顺序排序

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

bool Compare(string x, string y)
{
    return x < y;
}

int main()
{
    int n;
    scanf("%d", &n);
    string *str = new string[n]; //动态申请n个string类型的数组
    for (int i = 0; i < n; i++)
        cin >> str[i];
    sort(str, str + n, Compare);
    for (int i = 0; i < n; i++)
        cout << str[i] << (i < n - 1 ? " " : "\n");
    return 0;
}
// 超长整数相加，利用 String类型存储

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string x, y;
    int result[128]; //最后的结果可能超出100位
    cin >> x >> y;
    int i, j, k, d; //i和j分别用于表示x和y的长度
    i = x.size() - 1;
    j = y.size() - 1;
    if (i < j)
    {
        swap(x, y); //使字符串x为两者最长
        swap(i, j);
    }
    k = d = 0; //k表示result的数组下标,d表示进位
    while (j >= 0)
    {
        int temp = x[i--] - '0' + y[j--] - '0' + d;
        result[k++] = temp % 10;
        d = temp / 10; //d表示进位
    }
    while (i >= 0)
    {
        int temp = x[i--] - '0' + d;
        result[k++] = temp % 10;
        d = temp / 10;
    }
    if (d != 0) //最高位进位
        result[k] = d;
    else
        k--;
    for (int i = k; i >= 0; i--)
        cout << result[i]; //倒序输出整型数组

    printf("\n");
    return 0;
}
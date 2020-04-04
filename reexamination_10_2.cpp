// 编写FindAndSum函数，输入一个字符串，把字符串中的数字当作整数进行求和。

#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>

using namespace std;

const int MAXN = 10001; //定义字符串的整数最多个数

int FindAndSum(string str)
{
    int data[MAXN] = {0};
    int i, j;
    for (i = j = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]))
        {
            data[j] *= 10;
            data[j] += str[i] - '0';
        }
        else if (!isdigit(str[i]) && isdigit(str[i - 1]) && i != str.size() - 1)
        { //如果该字符不是数字，但前一个字符是数字，且该字符不是最后一个字符
            j++;
        }
    }
    int sum = 0;
    for (; j >= 0; j--)
        sum += data[j];
    return sum;
}

int main()
{
    string str;
    cout << " 请输入一个字符串：";
    cin >> str;
    cout << " 字符串求和的结果为：" << FindAndSum(str) << endl;
    return 0;
}
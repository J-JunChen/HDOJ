//  给定一个仅包含“A”-“Z”的字符串，我们可以使用以下方法对其进行编码:
// 1。每个包含k个字符的子字符串应该被编码到“kX”，其中“X”是这个子字符串中唯一的字符。
// 2。如果子字符串的长度为1，则“1”应被忽略。
// 输入
// 第一行包含一个整数N(1 <= N <= 100)，表示测试用例的数量。下一个N行包含N个字符串。每个字符串只包含“A”-“Z”，长度小于10000。
// 输出
// 对于每个测试用例，将编码的字符串输出到一行中。（Encoding —–对应杭电oj的1020题）

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    int n, i;
    string str;
    scanf("%d", &n);
    while (n--)
    {
        cin >> str;
        int num = 1; //计算字串相同字符的个数
        string result = "";
        for (i = 0; i < str.size(); i++) //i < str.size()-1: 留下最后一个字符
        {
            if (str[i] == str[i + 1]) //为什么可以i+1?
                num++;
            else
            {
                if (num == 1)
                    result += str[i];
                else
                {
                    result = result + to_string(num) + str[i]; //to_string：int型变成string型
                }
                num = 1;
            }
        }
    //    cout<<str[str.size()]<<endl; //输出居然是null
        cout << result << endl;
    }

    return 0;
}
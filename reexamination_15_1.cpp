// 给定一个字符串,计算字符串中数值的个数并求和。其中还包含了负号，若紧跟负号的是一个数值，则表示这是一个负数，若后面跟着的不是数字，则不表示什么。输入：一个字符串输出：数值个数数值和列子
// 输入：312ab-2—9–a
// 输出：3 301

#include <iostream>
#include <cstdio>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string str;
    cin >> str; //输入一个字符串

    int i, j, step, sum; //step表示数值的个数；sum表示数值之和
    i = step = sum = 0;
    while (i < str.size())
    {
        if (isdigit(str[i]) || (str[i] == '-' && isdigit(str[i + 1]))) //证明该字符是数字,或者为负数，在判断时候就可以按照题目的要求进行。
        {
            // if (isdigit(str[i]))
            step++; //如果开始就是数字则加一
            string s = "";
            s += str[i];
            for (j = i + 1; j < str.size(); j++)
            {
                if (isdigit(str[j]))
                {
                    // if (str[j - 1] == '-') //如果是负数，则step自增
                    //     step++;
                    s += str[j];
                }
                else //如果数字后面或者负号后面接的不是数字，则退出
                    break;
            }
            // if (isdigit(str[j - 1]) != '-')
            sum += stoi(s); //std标准库中StringToInt
            i = j;
        }
        else
            i++;
    }
    cout << step << " " << sum << endl;
    return 0;
}
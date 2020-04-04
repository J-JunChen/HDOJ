// // 输入一个长整型的数，从低位起取出奇位数组成一个新的数输出
// // 毫无疑问，还是可以使用 String 类型
// // 但题目说是输入长整型的数了，应该按照题目的格式来
// 长整型和reexamination_2的超长整数概念不一致

#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
    long n, result;
    cin >> n;
    result = 0;
    int value = 1, i = 1; //value表示当前该位置的权值
    while (n)
    {
        if (i % 2)
        {
            result += n % 10 * value;
            value *= 10;
        }
        n /= 10;
        i++;
    }
    cout << result << endl;
    return 0;
}
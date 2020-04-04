// 丑数是这样定义的：如果一个正整数的素因子只包含 2、3、5、7四种，则它被称为丑数。以下数列 1， 2， 3，4， 5，6，7，8，9， 10，12，14，15，16，18， 20， 21，24，25， 27………. 就显示了前20个丑数。
// 给出一个正整数N，判断这个数是否为丑数。

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
    vector<int> data = {2, 3, 5, 7}; //丑数规则
    int x, result;
    cin >> x; //输入一个正整数；
    result = x;
    for (int i = 0; i < data.size() && x!=1; i++)
    {
        while (x % data[i] == 0)
        {
            x /= data[i];
        }
    }
    if (x == 1)
        cout << result << " 是丑数" << endl;
    else
        cout << result << " 不是丑数" << endl;

    return 0;
}
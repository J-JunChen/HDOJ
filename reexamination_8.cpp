// 水仙花数，一个三位数，其每位数的立方之和 = 这个数

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int x, temp, result;
    cin >> x;
    result = 0;
    temp = x;
    while (temp)
    {
        result += pow(temp % 10, 3);
        temp /= 10;
    } 
    if (result == x)
        cout << x << " 是水仙花数" << endl;
    else
        cout << x << " 不是水仙花数" << endl;
    
}
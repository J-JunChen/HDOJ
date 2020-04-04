// 输入三个正整数A,B,C;判断这三个数能不能构成一个三角形；

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int a[3];
    cout << "请分别输入三个正整数：";
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if (a[0] + a[1] > a[2])
        cout << " 可以构成三角形" << endl;
    else
        cout << " 不能构成三角形" << endl;
    return 0;
}
//2.在二维坐标系中，做N条垂直线（与x轴垂直），起点为（i, 0)，终点为（i, Yi）。i为自然数， 0<= i <= N。试从N条垂直线中取出2条并且与X轴形成一个凹型水槽，向其中注水，
// 问如何选择垂线能使注入的水最多（即两条垂线的x坐标之差的绝对值乘上两条垂线段中y坐标较小的那个，得到的结果要最大）。
// 先输入一个数N,代表垂线段的个数，再输入N个Yi（i = 0，1，2.....N-1）。

// 例：input: 11 2 8 6 7 4 8 9 2 7 3 5

//     output:  49

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n, *y, max;
    scanf("%d", &n);
    y = new int[n]; //动态申请大小为n的整型数组；
    for (int i = 0; i < n; i++)
        cin >> y[i];
    max = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int size = abs(j - i) * (y[i] < y[j] ? y[i] : y[j]);  //暴力遍历，求出每个可能组成的凹形水槽的面积，然后分别与max比较
            if (max < size)
                max = size;
        }
    }
    cout << max << endl;
    return 0;
}
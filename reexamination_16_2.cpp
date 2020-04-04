// 在一个二维平面内有n个点，每个点坐标为（x，y），求最近的两点的距离。（暴力求解即可）
// 输入：
// 5
// 1 2
// 100 200
// 1000 2000
// 1000 1
// 1 3
// 输出：
// 1

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

struct Point
{
    double x;
    double y;
};

int main()
{
    int n;
    // int **point ; //动态申请一个二维数组
    Point *points;
    scanf("%d", &n);
    points = new Point[n];
    for (int i = 0; i < n; i++)
        cin >> points[i].x >> points[i].y;

    double min = -1;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            double sum = sqrt(pow(points[i].x - points[j].x, 2) + pow(points[i].y - points[j].y, 2));
            if (min < 0)
                min = sum; // min第一次正确赋值
            else if (sum < min)
                min = sum;
        }
    }

    cout <<" 最近两点的距离："<< min << endl;
    return 0;
}
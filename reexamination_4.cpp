// 输入n个数，按从小到大排序

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool Compare(double x, double y)
{
    return x < y;
}

int main()
{
    double *data;
    int n;
    scanf("%d", &n);      //输入n的大小
    data = new double[n]; //动态生成数组
    for (int i = 0; i < n; i++)
        scanf("%lf",&data[i]);  //double型输入是%lf
    sort(data, data + n, Compare); //浮点数进行排序，排序规则自定义
    for (int i = 0; i < n; i++)
        printf(i < n-1? "%f ":"%f\n" ,data[i]);  //至关重要
    return 0;
}
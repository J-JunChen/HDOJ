// 看完整的电视节目个数
//一维数组的动态规划，贪心算法

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Program
{
    int startTime;
    int endTime;
};

const int MAXN = 100;

Program arr[MAXN];

bool Compare(Program x, Program y)
{
    return x.endTime < y.endTime;
}

int main()
{
    int n;
    int time[100][2];
    while (scanf("%d", &n) != EOF)
    {
        if (n != 0)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i].startTime >> arr[i].endTime;
            }
            sort(arr, arr + n, Compare); //按结束时间升序排序
            int currentTime = 0;         //设置当前时间
            int answer = 0;
            for (int i = 0; i < n; i++)
            {
                if (currentTime <= arr[i].startTime)
                {
                    currentTime = arr[i].endTime;
                    answer++;
                }
            }
            cout << answer << endl;
        }
    }

    return 0;
}
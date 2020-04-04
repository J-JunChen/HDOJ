// 简要描述：输入一个数，代表要检测的例子的个数，每个例子中：
// 输入两个时间（格式HH:MM:SS），前面时间减去后面时间，输出在时钟上显示的时间，格式一样，如果是以为数字的前面补零。

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    int time[2][3];
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d:%d:%d", &time[0][0], &time[0][1], &time[0][2]); //输入第一个时间
        scanf("%d:%d:%d", &time[1][0], &time[1][1], &time[1][2]); //输入第二个时间

        for (int i = 2; i >= 1; i--)
        {
            if (time[0][i] < time[1][i])
            {
                time[0][i] += 60 - time[1][i];
                time[0][i - 1]--; //分种数减一
            }
            else
                time[0][i] -= time[1][i];
        }
        time[0][0] -= time[1][0];
        // if(time[0][0]<time[1][0])
        if(time[0][0]>0)
            printf("%02d:%02d:%02d\n", time[0][0], time[0][1], time[0][2]);
        else
            printf("-%02d:%02d:%02d\n", -time[0][0], time[0][1], time[0][2]);
    }
    return 0;
}

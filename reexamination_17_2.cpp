// Input:输入N个员工，每个员工的ID号、上班时间、下班时间
// OutPut:
// 最早去的员工的ID和上班时间
// 最迟走的员工的ID和下班时间
// 工作最久的员工ID和总上班时间

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include <algorithm>
using namespace std;
struct time
{
    int hour;
    int min;
    int sec;
};
struct employer
{
    char id[100];
    struct time t1, t2;
    int diff;
} buf[100];
bool cmp1(employer a, employer b)
{ //比较出上班时间最早的
    if (a.t1.hour != b.t1.hour)
        return a.t1.hour < b.t1.hour;
    else if (a.t1.min != b.t1.min)
        return a.t1.min < b.t1.min;
    else
        return a.t1.sec < b.t1.sec;
}
bool cmp2(employer a, employer b)
{ //比较出下班时间最晚的
    if (a.t2.hour != b.t2.hour)
        return a.t2.hour > b.t2.hour;
    else if (a.t2.min != b.t2.min)
        return a.t2.min > b.t2.min;
    else
        return a.t2.sec > b.t2.sec;
}
bool cmp3(employer a, employer b)
{ //比较出留在单位的时间最长的
    return a.diff > b.diff;
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s%d:%d:%d %d:%d:%d", &buf[i].id, &buf[i].t1.hour, &buf[i].t1.min, &buf[i].t1.sec,
              &buf[i].t2.hour, &buf[i].t2.min, &buf[i].t2.sec);
        buf[i].diff = (buf[i].t1.hour * 3600 + buf[i].t1.min * 60 + buf[i].t1.sec) - (buf[i].t2.hour * 3600 + buf[i].t2.min * 60 + buf[i].t2.sec);
    }
    //每进行一次比较，就输出一次排序后的结果
    sort(buf, buf + n, cmp1);
    printf("%s %d:%d:%d\n", buf[0].id, buf[0].t1.hour, buf[0].t1.min, buf[0].t1.sec);
    sort(buf, buf + n, cmp2);
    printf("%s %d:%d:%d\n", buf[0].id, buf[0].t2.hour, buf[0].t2.min, buf[0].t2.sec);
    sort(buf, buf + n, cmp3);
    printf("%s %d:%d:%d\n", buf[0].id, buf[0].t1.hour, buf[0].t1.min, buf[0].t1.sec);
    return 0;
}

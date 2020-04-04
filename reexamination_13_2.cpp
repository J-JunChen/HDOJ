// 简要描述：一个活动有N个人参加，一个主持人和N-1个普通参加者，其中所有的人都认识主持人，主持人也认识所有的人，
// 主持人要求N-1个参加者说出他们在参加者中所认识的人数，如果A认识B，则B认识A，所以最少是会认识一个人，就是主持人，他们说出了自己所认识的人数后，需要判断他们中有没有人说谎
// 输入：
// 第一行是N，N=0表示结束
// 第二行是N-1个数字
// 输出：
// Lie absolutely 或者 Maybe truth
// 7
// 1 2 4 5 5 3

// 9
// 3 7 7 7 7 5 6 6
// 两个测试例子中第一个是Lie absolutely，第二个是Maybe truth

#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

bool Compare(int x, int y)
{
    return x > y;
}

int main()
{
    int n;
    int *infor;                       //申请一个动态数组
    while (scanf("%d", &n) != EOF, n) //输入n个人，其中包括一个主持人，且n必须不等于0
    {
        infor = new int[n - 1]; //申请了一个n个int型的动态数组
        for (int i = 0; i < n - 1; i++)
            cin >> infor[i];
        for (int i = 0; i < n - 1; i++)
            infor[i]--; //每个参加者都减去认识的主持人；

        sort(infor, infor + n - 1, Compare); //降序排序
        bool flag = true;
        for (int i = 0; i < n - 2 && flag; i++)
        {
            for (int j = i + 1; j < n - 1 && flag; j++)
            {
                if (infor[i] > 0)
                {
                    infor[i]--;
                    infor[j]--;
                    if (infor[j] < 0)
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }
        if (flag)
            cout << "Maybe truth" << endl;
        else
        {
            cout << "Lie absolutely" << endl;
        }
    }
}
// 选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分，请编程输出某选手的得分。
// 输入数据有多组，每组占一行，每行的第一个数是n(2<n<=100)，表示评委的人数，然后是n个评委的打分。

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n, min, max, score;
    double sum;
    // int people[100];
    while (cin >> n)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            // cin>>people[i];
            cin >> score;
            sum += score;
            if (i == 0)
            {
                min = max = score;
            }
            else
            {
                if (min > score)
                    min = score;
                if (max < score)
                    max = score;
            }
        }
        sum = sum - min - max;
        cout <<fixed<<setprecision(2)<< sum/(n-2) << endl;
    }
    return 0;
}
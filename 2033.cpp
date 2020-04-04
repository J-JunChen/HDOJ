// 人见人爱A+B，A和B都是时间三个整数

#include <iostream>
using namespace std;

int main()
{
    int n, i, num;
    int time[6];
    while (cin >> n)
    {
        while (n--)
        {
            for (i = 0; i < 6; i++)
                cin >> time[i];
            // if (time[2] + time[5] <= 59)
            // {
            //     time[2] = time[2] + time[5];
            //     num = 0;
            // }
            // else
            // {
            //     time[2] = time[2] + time[5] - 60;
            //     num = 1;
            // }
            // if (time[1] + time[4] + num <= 59)
            // {
            //     time[1] = time[1] + time[4] + num;
            //     num = 0;
            // }
            // else
            // {
            //     time[1] = time[1] + time[4] + num - 60;
            //     num = 1;
            // }
            // time[0] += num + time[3];

            // for (i = 0; i < 3; i++)
            // {
            //     cout << time[i] << (i < 2 ? ' ' : '\n');
            // }

            //逢60进一
            time[1] += (time[2] + time[5]) / 60; //商
            time[2] = (time[2] + time[5]) % 60; //余数

            time[0] += (time[1] + time[4]) / 60;
            time[1] = (time[1] + time[4]) % 60;

            time[0] += time[3];
            cout << time[0] << " " << time[1] << " " << time[2] << endl;
        }
    }

    return 0;
}
// 求平均成绩

#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
    int n, m;
    int i, j, num;
    int score[50][5];
    int a[50], b[5];
    bool flag;
    while (cin >> n >> m)
    {
        memset(score, 0, sizeof(score)); //数组全部重置0
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> score[i][j];
                b[j] += score[i][j];
                a[i] += score[i][j];
            }
        }
        for (i = 0; i < n; i++)
            cout << fixed << setprecision(2) << 1.0*a[i] / m << (i < n - 1 ? ' ' : '\n'); //C++三元运算符
        for (i = 0; i < m; i++)
            cout << fixed << setprecision(2) << 1.0*b[i] / n << (i < m - 1 ? ' ' : '\n');
        for (num = 0, i = 0; i < n; i++)
        {
            for (flag = true, j = 0; j < m; j++)
            {
                if (score[i][j] < double(b[j]) / n){
                    flag = false;
                    break; //只要一门不行就跳出来
                }
            }
            if (flag)
                num++;
        }
        cout << num <<"\n\n";
    }
    return 0;
}
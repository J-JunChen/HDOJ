// 海选女主角

#include <iostream>
#include <iomanip>
#include<cmath> // double型的fabs()绝对值比较
using namespace std;

int main()
{
    int m, n, i, j, row, col;
    long long max, people; // double型取代 long， 或者long long型也是也可以的
    while (cin >> m >> n)
    {
        // row = col = 0;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> people;
                if (i == 0 && j == 0) //必须初始值
                    max = people;
                else
                {
                    
                    if (fabs(max) < fabs(people)) //double型的绝对值比较利用 cmath 头文件的fabs()
                    {
                        row = i;
                        col = j;
                        max = people;
                    }
                }
            }
        }
        cout << row + 1 << " " << col + 1 << " " << fixed << setprecision(0) << max << endl;
    }
    return 0;
}
// 访问所有朋友的最短距离

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int n, m, i, route;
    int data[501], way[501];
    while ((scanf("%d", &n) != EOF))
    {
        while (n--)
        {
            cin >> m;
            for (i = 0; i < m; i++)
                cin >> data[i];
            memset(way, 0, m*sizeof(int)); //数组重置
            for (i = 0; i < m; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    if (j != i)
                        way[i] += fabs(data[i] - data[j]);
                }
            }
            sort(way, way + m);
            cout << way[0] << endl;
        }
    }

    return 0;
}

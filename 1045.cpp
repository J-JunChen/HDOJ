// 在一个二维矩阵中设置炮台，并且炮台同一排或同一列都不能设备其他炮台，除非有墙挡住

#include <iostream>
#include <limits>
using namespace std;

int Maxn, n;
char map[5][5];

bool isCanPut(int x, int y)
{
    if (map[x][y] == 'X')
        return false;
    int i, j;
    for (i = x - 1; i >= 0; i--)
    {
        if (map[i][y] == 'X')
            break;
        if (map[i][y] == 'o')
            return false;
    }
    for (j = y - 1; j >= 0; j--)
    {
        if (map[x][j] == 'X')
            break;
        if (map[x][j] == 'o')
            return false;
    }
    return true;
}

void DFS(int num, int index) //num表示炮台数，Index表示当前索引
{
    if (index == n * n)
    {
        if (num > Maxn)
            Maxn = num;
    }
    else
    {
        int x = index / n;
        int y = index % n;
        if (isCanPut(x, y))
        {
            map[x][y] = 'o';
            DFS(num + 1, index + 1);
            map[x][y] = '.';  //回溯这个不能少
        }
        DFS(num, index + 1);
    }
}

int main()
{
    while (cin >> n && n != 0)
    {
        int i, j;
        Maxn = INT_MIN;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                cin >> map[i][j];
        DFS(0, 0);
        cout << Maxn << endl;
    }
}
// 连连看

#include <iostream>
#include<cstring>

#define MAXN 1005
#define MAXM 1005
using namespace std;
int n, m;
int maze[MAXN][MAXM];
bool visited[MAXN][MAXM];
int mstep[MAXN][MAXM];
int opt;

int X[] = {0, 0, 1, -1};
int Y[] = {1, -1, 0, 0};

struct node
{
    int x, y;
    int way;
    int step;
} S, D;

bool check(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > m)
        return false;
    if (visited[x][y])
        return false;
    if (maze[x][y] != 0 && maze[x][y] != maze[S.x][S.y])
        return false;
    return true;
}

bool dfs(node top)
{
    if (top.step > 2)
    {
        return false;
    }
    //大佬用的剪枝
    /*if(top.step==2&&top.x!=D.x&&top.y!=D.y)
        return false;*/
    if (top.step <= 2 && top.x == D.x && top.y == D.y)
        return true;

    //我用的剪枝：记录下此节点最小转向次数
    if (top.step >= mstep[top.x][top.y])
        return false;
    else
    {
        mstep[top.x][top.y] = top.step;
    }

    for (int i = 0; i < 4; i++)
    {
        node tmp;
        tmp.x = top.x + X[i];
        tmp.y = top.y + Y[i];
        tmp.way = i; //记录方向
        tmp.step = top.step;
        if (tmp.way != top.way) //方向不同，次数加1
            tmp.step = top.step + 1;
        if (!check(tmp.x, tmp.y))
            continue;
        //如果遇到相同数字的点，绕过去
        if (maze[tmp.x][tmp.y] == maze[S.x][S.y] && (tmp.x != D.x || tmp.y != D.y))
            continue;
        visited[tmp.x][tmp.y] = true;
        if (dfs(tmp))
            return true; //找到了，一直返回true，知道完全退出函数
        //没找到，回溯
        visited[tmp.x][tmp.y] = false;
    }
    return false;
}

int main()
{
    while (cin >> n >> m)
    {
        if (!n && !m)
            break;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> maze[i][j];
            }
        }
        cin >> opt;
        while (opt--)
        {
            for (int i = 1; i <= n; i++)
                for (int j = 1; j <= m; j++)
                    mstep[i][j] = 9999;
            memset(visited, false, sizeof(visited));
            cin >> S.x >> S.y >> D.x >> D.y;
            S.step = -1;
            S.way = -1;
            //简单判断
            if (maze[S.x][S.y] != maze[D.x][D.y] || maze[S.x][S.y] == 0 || maze[D.x][D.y] == 0 || (S.x == D.x && S.y == D.y))
            {
                cout << "NO" << endl;
                continue;
            }
            if (dfs(S))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
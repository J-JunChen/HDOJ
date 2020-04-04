#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    int a[N][N]; //朋友关系矩阵 
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
    int vis[N]; //访问数组，1表示该节点已经访问过，0代表未访问过 
    fill(vis, vis + N, 0);
    //初始化全为0
    int num = 0; //朋友圈数 
    for (int i = 0; i < N; i++)
    { //i代表人的编号，这里要依此遍历每一个人 
        if (vis[i] == 0)
        {
            num++;
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            while (!q.empty())
            {
                int now = q.front();
                q.pop();
                for (int j = 0; j < N; j++)
                {
                    if (vis[j] == 0 && a[now][j] == 1)
                    {
                        q.push(j);
                        vis[j] = 1;
                    }
                }
            }
        }
    }
    printf("%d\n", num);
    return 0;
}
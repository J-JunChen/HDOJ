/// 有一个MN的材料和一个st的模板，从材料中切除模板，求最大能切出来的模板的数量。
// sample input
// ：
// 3 4
// a b c d
// c d a b
// a c c d
// 2 2
// a b
// c d
// sample out
// 2

#include <iostream>
#include <cstdio>
#include <cstring>
#define MAXM 128
#define MAXN 128

using namespace std;

bool visited[MAXM][MAXN]; //访问标记数组
char map[MAXM][MAXN];
char model[MAXM][MAXN];

int m, n, s, t, num;

bool judge(int x1, int y1)
{
    if (x1 > m - s + 1 || y1 > n - t + 1)
        return false;
    if(visited[x1][y1] == true) return false;

    bool flag = true;
    for (int i = 0; i < s && flag; i++)
        for (int j = 0; j < t && flag; j++)
            if (map[x1 + i][y1 + j] != model[i][j])
                flag = false;

    if (flag)
    {
        num++;
        for (int i = 0; i < s && flag; i++)
            for (int j = 0; j < t && flag; j++)
                visited[x1 + i][y1 + j] = true;
        return true;
    }
    return false;
}

void Search()
{
    int i, j;
    i=j=0;
    for (i = 0; i < m - s + 1; i++)
    {
        for (j = 0; j < n - t + 1; j++)
        {
            judge(i,j);
        }
    }
}

int main(int argc, char *argv[])
{
    int i, j;
    cin >> m >> n; //输入原矩阵大小
    memset(visited, false, sizeof(visited));
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            cin >> map[i][j]; //输入原矩阵
    cin >> s >> t;            //输入模式矩阵大小
    for (i = 0; i < s; i++)
        for (j = 0; j < t; j++)
            cin >> model[i][j]; //输入模式矩阵
    num = 0;
    Search();
    cout<<num<<endl;
    return 0;
}
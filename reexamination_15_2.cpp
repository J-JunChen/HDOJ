// 给定一个数字矩阵，如果上下左右数值相同，则表示是一个连通的区域。求矩阵中连通块的数量。
//输入：先是矩阵的行数和列数，接着是矩阵
//输出：连通块的数量（连通块，即连通分量。）（连通分量，即任意两个顶点都是连通的）
// 例子
// 5 6
// 4 4 4 4 4 4
// 4 2 3 3 1 4
// 4 2 2 3 1 4
// 4 2 3 3 1 4
// 4 4 4 4 4 4
// 输出
// 4
// 说明所有4能连起来，还有2 3 1，都有各自能连通块。

#include <iostream>
#include <algorithm>
#include <queue>
#define MAXN 6
#define MAXM 6

using namespace std;

const int dir[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

int N, M, data[MAXN][MAXM];
int num = 0;
bool visited[MAXN][MAXM];

bool Judge(int x, int y, int tx, int ty)
{
    if (tx < 0 || tx >= N || ty < 0 || ty >= M)  //超出范围，不符合
        return false;
    if (visited[tx][ty])  //已经访问过，不符合
        return false;
    if (data[x][y] != data[tx][ty])  //值不相等，不符合
        return false;
    return true;
}

void DFS(int x, int y)
{

    visited[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int tx = x + dir[i][0];
        int ty = y + dir[i][1];
        // if (tx >= 0 && tx < N && ty >= 0 && ty < M && data[x][y] == data[tx][ty] && !visited[tx][ty])
        if(Judge(x,y,tx,ty))
        {
            DFS(tx, ty);
        }
    }
}

void DFSTraverse() //深度优先搜索初始化
{
    fill(visited[0], visited[0] + N * M, false); //fill给二维数组初始化

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (!visited[i][j])
            {
                num++;
                DFS(i, j);
            }
}

void BFS(int x, int y)   //广度优先需要把结点变成一个struct类型才好做
{
    visited[x][y] = true;
    queue<int> q;
    q.push(data[x][y]);
    while (!q.empty())
    {
        int value = q.front();  //队头出队
        q.pop();
        for(int i =0 ;i<4;i++){
            int tx = x + dir[i][0];
            int ty = y + dir[i][1];

        }
            
    }
    
}

void BFSTraverse()
{
    fill(visited[0], visited[0] + N * M, false);
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (!visited[i][j])
            {
                num++;
                BFS(i, j);
            }
}

int main()
{
    int i, j;
    cin >> N >> M;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            cin >> data[i][j];
    DFSTraverse();
    cout << num << endl;
    return 0;
}

// 4.找朋友。假设A是B的朋友，那么B也是A的朋友，C与B为朋友，则C与A也为朋友，另外，自己与自己也是朋友。
// 输入一个数N，代表人数，紧接着输入一个N*N的矩阵，1代表两个人是朋友，0代表两个人不是朋友。求有几个朋友圈。
//input: 3
//          1 1 0
//          1 1 0
//          0 0 1
// output: 2

#include <iostream>
#include <cstdio>
// #include <cstring>
#include <queue>
#include <algorithm>
#define MAXN 128

using namespace std;

bool visited[MAXN];
int N, graph[MAXN][MAXN];
int num = 0;
queue<int> Queue;

void BFS(int start) //从start开始进行广度优先搜索
{
    num++; //人数加1
    visited[start] = true;
    Queue.push(start); //start入队
    while (!Queue.empty())
    {
        int index = Queue.front(); //出队头节点
        Queue.pop();
        for (int j = index + 1; j < N; j++)
        { //检查所有index顶点的所有邻接点
            if (!visited[j] && graph[index][j] == 1)
            {
                visited[j] = true;
                Queue.push(j);
            }
        }
    }
}

void BFSTraverse()
{
    fill(visited, visited + N, false); //c++的初始化数组，fill函数在algorithm头文件中
    for (int i = 0; i < N; i++)        //从0号开始开始遍历
        if (!visited[i])               //对每个连通分量调用一次BFS
            BFS(i);                    //Vi未访问过，从Vi开始访问BFS
}

void DFS(int start)
{
    visited[start] = true;
    for (int j = 0; j < N; j++)
    {
        if (!visited[j] && graph[start][j] == 1)
            DFS(j);
    }
}

void DFSTraverse()
{
    fill(visited, visited + N, false); //c++的初始化数组，fill函数在algorithm头文件中
    for (int i = 0; i < N; i++)        //从0号开始开始遍历
        if (!visited[i])               //对每个连通分量调用一次DFS
        {
            num++;  //num++不同于BFS
            DFS(i); //Vi未访问过，从Vi开始访问DFS
        }
}

int main()
{
    int i, j;
    scanf("%d", &N);
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            cin >> graph[i][j];
    // memset(visited, false, sizeof(visited)); //C:初始化标记数组
    DFSTraverse();

    cout << num << endl;
    return 0;
}

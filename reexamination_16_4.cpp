// 有一个由数字组成的二维矩阵，大小为N*M；还有一个大小为n*m小二维矩阵，想象将小二维矩阵上面（小矩阵左上角位置和大矩阵某个位置对应放弃），在不同的位置，这两个二维矩阵对应位置的数字绝对值之差和一般是不同的，
// 求这个最小绝对值之差的和，并求出对应的大矩阵位置。（暴力求解，枚举大矩阵的位置即可） 

// 输入4 4 

// 1 2 3 4 
// 4 5 6 8 
// 1 2 3 4 
// 5 6 7 8 

//n*m: 2 2 

// 2 2 
// 4 5 

// 输出：最小距离为0，对应的坐标起始点（1,1）、（3，1）。 

#include <iostream>
#include <cstdio>
#include <algorithm>
#define MAXN 4
#define MAXM 4

using namespace std;

int D[MAXN][MAXM];
int d[MAXN][MAXM];
int N, M, n, m;

int Min()
{
    int i, j, k, z;
    int min = INT_MAX;
    for (i = 0; i < N - n + 1; i++)  //记得+1
    {
        for (j = 0; j < M - m + 1; j++) //记得+1
        {
            int temp = 0;
            for (k = 0; k < n; k++)
            {
                for (z = 0; z < m; z++)
                {
                    temp += abs(D[i + k][j + z] - d[k][z]);
                }
            }
            if (temp < min)
                min = temp;
        }
    }
    return min;
}

int main()
{
    int i, j;
    cin >> N >> M;
    fill(D[0], D[0] + N * M, 0); //初始化大矩阵D
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            cin >> D[i][j]; //输入大矩阵
    cin >> n >> m;
    fill(d[0], d[0] + n * m, 0); //初始化小矩阵d
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            cin >> d[i][j]; //输入小矩阵
    cout << Min() << endl;
    return 0;
}
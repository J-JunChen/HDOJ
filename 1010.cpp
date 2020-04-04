// // 小狗在一个迷宫的大逃亡

// =====================================================================================
// 
//       Filename:  zoj2110.cpp
//    Description:  Tempter of the Bone
//      Algorithm:  DFS 
//         Status: 	RunTime:90ms 	RunMemory:188KB 
//        Version:  1.0
//        Created:  2011年02月01日 14时26分10秒 
//       Revision:  none
//       Compiler:  g++
//         Author:  Moose Chan, chyshnu@gmail.com
//        Company:  SHNU
//
// =====================================================================================
#include <iostream>
#include <cmath>
using namespace std;
int N, M, T, sx, sy, ex, ey;
char map[6][6];
const int dir[4][2] = { { 0, 1 }, { 1, 0 }, { 0, -1 }, { -1, 0 } };
bool solved =  false, arrd[6][6];

int Distance ( int x, int y ) 
{
	return abs ( (double)x - ex ) + abs ( (double)y - ey ); // 当前点(x,y)到终点(ex,ey)的最短距离
}

void DFS ( int x, int y, int step )
{
	if ( solved ) return;
	if ( map[x][y] == 'D' && step == T ) {
		solved = true;
		return;
	}
	if ( step >= T ) return;                    // 当前时间即步数(step) >= T 而且还没有找到D点
	int dis = T - step - Distance ( x, y );
	if ( dis < 0 || dis % 2 ) return;           // 剩余步数小于最短距离或者满足奇偶剪枝条件
	for ( int i = 0; i < 4; i += 1 ) {
		int tx = x + dir[i][0];
		int ty = y + dir[i][1];
		int tstep = step + 1;
		if ( tx >= 0 && tx < N && ty >= 0 && ty < M && map[tx][ty] != 'X' && !arrd[tx][ty]) {
			arrd[tx][ty] = true;
			DFS ( tx, ty, tstep );
			arrd[tx][ty] = false;
		}
	}
}

int main ( int argc, char *argv[] )
{
	while ( cin >> N >> M >> T, N+M+T ) {
		solved = false;
		int xnum = 0;                           // 记录'X'的数量
		for ( int i = 0; i < N; i += 1 ) {
			for ( int j = 0; j < M; j += 1 ) {
				cin >> map[i][j];
				arrd[i][j] = false;
				if ( map[i][j] == 'S' ) {
					sx = i;
					sy = j;
					arrd[i][j] = true;
				}
				else if ( map[i][j] == 'D' ) {
					ex = i;
					ey = j;
				}
				else if ( map[i][j] == 'X' ) {
					xnum++;
				}
			}
		}
		if ( N * M - xnum > T ) { // 可通行的点必须大于要求的步数，路径剪枝。
			DFS ( sx, sy, 0 );
		}
		if ( solved )
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}
	return 0; 
}
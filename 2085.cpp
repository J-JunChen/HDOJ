// 核反应堆

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    // char n[34];
    // n[0]=getchar();
    // while (n[0] != '-1')
    // {
    //     while((n=getchar())!='\n'){

    //     }
    // }

    // __int64 data[1024]; //自定义数组大小
    // while (getchar()!='\n')
    // {
    //     /* code */
    // }

    // 动态规划
    __int64 high[34] = {1}; //高能质点0微妙的时候是 1 个
    __int64 low[34] = {0};  //低能质点0微妙的时候是 0 个
    for (int i = 1; i < 34; i++)
    {
        high[i] = high[i - 1] * 3 + low[i - 1] * 2; //质点被吸收
        low[i] = high[i - 1] + low[i - 1];
    }
    int n; 
    while (scanf("%d", &n), n != -1) //这里可以一行输入5 2 ，并非一定输入5后要换行输入2
    {
        cout << high[n] << ", " << low[n] << endl;
    }

    return 0;
}
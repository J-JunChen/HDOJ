//有一个长度为n(n<=100)的数列，该数列定义为从2开始的递增有序偶数，
//现在要求你按照顺序每m个数求出一个平均值，如果最后不足m个，则以实际数量求平均值。编程输出该平均值序列。

// INPUT: 输入数据有多组，每组占一行，包含两个正整数n和m，n和m的含义如上所述。
// OUOUT: 对于每组输入数据，输出一个平均值序列，每组输出占一行。

#include <iostream>

using namespace std;

int main()
{
    int n, m, k;
    int average[100]; //申请一个存放平均数的数组
    bool flag;
    while (cin >> n >> m)
    {
        if (n % m == 0)
            k = n / m; //能整除
        else
            k = n / m + 1; //k为数组存放平均数的实际需要大小
        int i;
        for (i = 0; i < k - 1; i++)
        {
            // int j;
            // for(j = 2 ; j<= 2*n ;j +=2*m){

            //     average[i] =
            // }
        }
    }
    return 0;
}

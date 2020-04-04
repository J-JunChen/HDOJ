// 汉诺塔III
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        // cout<<pow(3,n)-1<<endl;
        printf("%.0f\n", pow(3, n) - 1);
    }

    return 0;
}
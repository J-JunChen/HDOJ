// Fibbonacci Number

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    __int64 data[51];
    data[0] = 0;
    data[1] = 1;
    for (int i = 2; i <= 50; i++)
    {
        data[i] = data[i - 1] + data[i - 2];
    }
    int n;
    while (scanf("%d", &n) != EOF)
    {
        if (n != -1)
            cout << data[n] << endl;
    }

    return 0;
}
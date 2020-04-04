// A|B

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    __int64 a, b;
    while ((scanf("%d", &n) != EOF))
    {
        while (n--)
        {
            cin >> a >> b;
            puts(a % b == 0 ? "YES" : "NO");
        }
    }

    return 0;
}
// Skhex数，即十进制和十六进制，和十二进制转换过程

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int x, y, z, result;
    while (scanf("%d", &x), x)
    {
        int temp;
        temp = x;
        result = z = y = 0;
        while (temp != 0)
        {
            y += temp % 16;
            temp /= 16;
        }
        temp = x;
        while (temp != 0)
        {
            z += temp % 12;
            temp /= 12;
        }
        temp = x;
        while (temp != 0)
        {
            result += temp % 10;
            temp /= 10;
        }
        cout << x << ((result == y && result == z) ? " is a Sky Number." : " is not a Sky Number.") << endl;
    }

    return 0;
}
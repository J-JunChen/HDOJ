// 手机短号

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    string long_number, short_number;
    while ((scanf("%d", &n) != EOF))
    {
        while (n--)
        {
            short_number = "6";
            cin >> long_number;
            short_number += long_number.substr(6, 10);
            cout << short_number << endl;
            short_number = "";
        }
    }

    return 0;
}
// 输入一个十进制的数，把它转成十六进制。

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

char IntToChar(int x)
{
    if (x < 10)
        return x + '0';
    else
        return x - 10 + 'A';
}

int main()
{
    int x;
    vector<char> hex;
    cout << "输入一个十进制数：";
    cin >> x;
    while (x)
    {
        hex.push_back(IntToChar(x % 16));
        x /= 16;
    }
    cout << " 对应是16进制数：";
    for (int i = hex.size() - 1; i >= 0; i--)
    {
        cout << hex[i];
    }
    cout << endl;

    return 0;
}
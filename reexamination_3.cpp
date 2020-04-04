// 回文串

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string str;
    int i;
    bool flag = true;
    cin >> str;
    int len = str.size();
    for (i = 0; i < len / 2 && flag; i++)
    {
        if (str[i] != str[len - i - 1])
            flag = false;
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
// 剪花布条

#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main()
{
    string s1, s2; //字符串匹配
    int num, i;
    while (cin >> s1 >> s2)
    {
        if (s1 != "#")
        {
            num = 0;
            while ((i = s1.find(s2)) != -1)
            {
                num++;
                s1 = s1.substr(i+s2.size(), s1.size());  //s1截断长度，或者直接调用库函数strstr()。
            }
            cout << num << endl;
        }
    }

    return 0;
}
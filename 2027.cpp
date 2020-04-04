// 统计每个元音字母在字符串中出现的次数。

#include <iostream>

using namespace std;

int main()
{
    int n;
    int a, e, i, o, u;
    char str[100];
    while (cin >> n)
    {
        getchar(); //关键
        while (n--)
        {
            gets(str); //获取字符串
            a = e = i = o = u = 0;
            for (int j = 0; str[j]; j++)
            {
                if (str[j] == 'a')
                    a++;
                else if (str[j] == 'e')
                    e++;
                else if (str[j] == 'i')
                    i++;
                else if (str[j] == 'o')
                    o++;
                else if (str[j] == 'u')
                    u++;
            }
            cout << "a:" << a << endl;
            cout << "e:" << e << endl;
            cout << "i:" << i << endl;
            cout << "o:" << o << endl;
            cout << "u:" << u << endl;
            if(n>0) //n-- 等于 1
                putchar('\n');
        }
    }

    return 0;
}
// 查找最大元素

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

// int main_c()
// {
//     char str[100];
//     char max;
//     int i;
//     while (gets(str))
//     {
//         for (max = ' ', i = 0; str[i]; i++) //这里的判断语句是str[i]是否为空
//         {
//             if (str[i] > max) //字符比较，就是直接比较就行
//                 max = str[i];
//         }
//         for (i = 0; str[i]; i++)
//         {
//             putchar(str[i]);
//             if (str[i] == max)
//                 cout << "(max)";
//         }
//         cout << endl;
//     }
//     return 0;
// }

int main()
{

    string str;
    char max;
    int i;
    while (getline(cin, str))
    {
        for (max = i = 0; i < str.size(); i++)
        {
            if (str[i] > max)
                max = str[i];
        }
        for (i = 0; i < str.size(); i++)
        {
            cout << str[i];
            if (str[i] == max)
                cout << "(max)";
        }
        printf("\n");
    }
    return 0;
}
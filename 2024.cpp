// // C语言合法标识符

// #include <iostream>
// #include <ctype.h>
// using namespace std;

// int main()
// {
//     int n, i;
//     bool flag;
//     char str[50]; //不超过50
//     while (cin >> n)
//     {
//         getchar(); //先得到一个'\n'
//         while (n--)
//         {
//             gets(str); //再get一个字符串string
//             if (str[0] != '_' && !isalpha(str[0])) //先判断是不是以下划线或字母开头
//             {
//                 puts("no");
//                 continue;
//             }
//             for (flag = true, i = 1; str[i]; i++)
//             {
//                 if (!isalnum(str[i]) && str[i] != '_') //isalnum：判断是否为字母或数字；
//                 {
//                     flag = false;
//                     break;
//                 }
//             }
//             puts(flag ? "yes" : "no");
//         }
//         return 0;
//     }
// }

#include <iostream>
#include <cstdio>
#include <ctype.h>
#include <string>

using namespace std;

int main()
{
    int n;
    string str;
    int flag;
    scanf("%d%*c", &n);
    while (n--)
    {
        getline(cin, str);
        if (str[0] != '_' && !isalpha(str[0]))
            cout << "no" << endl;
        else
        {

            for (int i = 1, flag = 1; i < str.size(); i++)
            {
                if (!isdigit(str[i]) && !isalpha(str[i]) && str[i] != '_')
                {
                    flag = 0;
                    break;
                }
            }
            if(flag) puts("yes");
            else puts("no");
            // printf(flag ? "yes\n" : "no\n");
        }
    }

    return 0;
}
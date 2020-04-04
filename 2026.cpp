// 输入一个英文句子，将每个单词的第一个字母改成大写字母。

#include <iostream>
#include<cstdio>
#include<string>

using namespace std;

// int main()
// {
//     char str[100];
//     int i;
//     while (gets(str))
//     {
//         putchar(toupper(str[0]));
//         for (i = 1; str[i]; i++)
//         {
//             putchar(str[i - 1] == ' ' ? toupper(str[i]) : str[i]);
//         }
//         putchar('\n');
//     }
//     return 0;
// }

int main(){
    string str;
    int i;
    while (getline(cin,str))
    {
        putchar(toupper(str[0]));
        for(i=1;i<str.size();i++){
            putchar(str[i-1]==' '? toupper(str[i]):str[i]);
        }
        putchar('\n');
    }
    

    return 0;
}
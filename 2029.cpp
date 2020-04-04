//“回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。请写一个程序判断读入的字符串是否是“回文”。
#include <iostream>
#include<cstdio>
#include<string>
using namespace std;

// int main()
// {
//     int n, i, len;
//     bool flag;
//     char str[1024]; //题目没有说字符串长度，则自定义长度
//     while (cin >> n)
//     {
//         getchar();
//         while (n--)
//         {
//             gets(str);
//             len = strlen(str); //获取char数组，即字符串长度
//             for (flag = true, i = 0; i < len / 2; i++)
//             {
//                 if (str[i] != str[len - i - 1]) //注意这个num-i-1;
//                 {
//                     flag = false;
//                     break;
//                 }
//             }
//             if (flag)
//                 cout << "yes" << endl;
//             else
//             {
//                 cout << "no" << endl;
//             }
//         }
//     }

//     return 0;
// }

int main(){
    string str;
    int n, i,flag;
    scanf("%d%*c",&n);
    while (n--)
    {
        getline(cin,str);
        int line = str.size();
        for(i=flag=0;i<line;i++){
            if(str[i] != str[line-1-i]){
                flag =1;
                break;
            }
        }
        puts(flag? "no":"yes");
    }
    
    return 0;
}
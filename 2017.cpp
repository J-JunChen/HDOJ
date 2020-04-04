// 
// 对于给定的一个字符串，统计其中数字字符出现的次数。

#include<iostream>
#include<ctype.h>
using namespace std;

int main(){
    int n, num;
    cin>>n;
    cin.get(); // 表示get到一个回车，cin>>n;cin.get() 雷同C语言的  scanf("%d%*c", &n);
    char c;
    for(int i=0;i<n;i++){
        
        for(num = 0; (c = getchar())!='\n';)
        {
            if(isdigit(c)) num++;
        }
        cout<<num<<endl;
    }
    return 0;
}

				
// C版本：
// int main(void)
// {
//     int n, d;
//     char c;

//     scanf("%d%*c", &n);
//     while (n--)
//     {
//         for (d = 0 ; (c = getchar()) != '\n' ;)
//         {
//             if (isdigit(c)) d++;
//         }
//         printf("%d\n", d);
//     }

//     return 0;
// }

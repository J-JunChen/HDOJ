// 汉字统计，从汉字机内码特点考虑

#include <iostream>
#include<cstdio>
#include<string>

using namespace std;

// int main()
// {
//     int n, count;
//     char c;
//     while (cin >> n)
//     {
//         getchar();
//         while (n--)
//         {
//             count = 0;
//             while ((c = getchar()) != '\n')
//             {
//                 if (c < 0) //汉字占双字节，高位的字节里都是 < 0,所以只要统计小于0的字符的个数
//                     count++;
//             } 

//             cout << count/2  << endl; // ？？？/2
//         }
//     }

//     return 0;
// }

int main(){
    int n,i,count;
    string str;
    scanf("%d%*c",&n);
    while (n--)
    {
        getline(cin,str);
        for(i=count =0;i<str.size();i++){
            if(str[i]<0) count++;//汉字占双字节，高位的字节里都是 < 0,所以只要统计小于0的字符的个数
        }
        cout<<count<<endl;
    }
    
    return 0;
}
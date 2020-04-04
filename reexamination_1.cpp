// 十进制转为m进制，m进制转为十进制
// 如果有交代多少进制，就不需要特定加函数了。

#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int CharToInt(char a){ //m进制转换为10进制
    if(a>='0' && a<='9')
        return a-'0';
    else 
        return a-'A' +10;
}

char IntToChar(int x){ //十进制转换为n进制 
    if(x<10)
        return x + '0';
    else 
        return x - 10 + 'A';
}

int main()
{
    int x;
    vector<char> answer;
    scanf("%d", &x);
    while (x)
    {
        answer.push_back(IntToChar(x % 8)); //如题转换为8进制
        x /= 8;
    }
    for (int i = answer.size() - 1; i >= 0; i--)
    {
        printf("%c", answer[i]);
    }
    printf("\n");
    return 0;
}
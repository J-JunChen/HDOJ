// A+B ,十六进制相加减等到等到十六进制

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    __int64 a, b;
    // %I64X：将一个 long long 长度的十进制数直接转换为十六进制数
    while (scanf("%I64X%I64X", &a, &b) != EOF)  //X表示字母大小写表示
    {
        if (a + b < 0)
            printf("-%I64X\n", -a - b);
        else
        {
            printf("%I64X\n", a + b);
        }
    }

    return 0;
}
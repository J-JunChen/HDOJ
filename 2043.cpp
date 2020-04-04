// (1).密码长度大于等于8，且不要超过16。
// (2).密码中的字符应该来自下面“字符类别”中四组中的至少三组。
// 这四个字符类别分别为：
// 1.大写字母：A,B,C...Z;
// 2.小写字母：a,b,c...z;
// 3.数字：0,1,2...9;
// 4.特殊符号：~,!,@,#,$,%,^;

#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    int m, num, flag;
    char c;
    bool lower, upper, digit, punct;
    while (cin >> m)
    {
        cin.get();
        for (int i = 0; i < m; i++)
        {
            flag = 0;
            lower = upper = digit = punct = false;
            for (num = 0; (c = getchar()) != '\n'; num++)
            {
                if (islower(c) && !lower)
                {
                    lower = true;
                    flag++;
                }
                else if (isupper(c) && !upper)
                {
                    upper = true;
                    flag++;
                }

                else if (isdigit(c) && !digit)
                {
                    digit = true;
                    flag++;
                }

                else if (ispunct(c) && !punct)
                {
                    punct = true;
                    flag++;
                }
            }
            if (num < 8 || num > 16 || flag < 3)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }

    return 0;
}
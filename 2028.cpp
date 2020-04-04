// Lowest Common Multiple Plus
// Output: 32位的整数

#include <iostream>


using namespace std;

// __int32 gcd(__int32 a,__int32 b)
// {
//     __int32 remainder;
//     remainder = a % b;
//     while (remainder)
//     {
//         a=b;
//         b = remainder;
//         remainder = a%b;
//     }
//     return b;

// }

__int32 gcd(__int32 x, __int32 y) //辗转相减法
{
    while (x != y)
    {

        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    return x;
    //辗转相除法
}

int main()
{
    int n;
    __int32 res, temp;
    while (cin >> n)
    {
        res = 1; // 初始为1
        while (n--)
        {
            cin >> temp;
            // cout<<gcd(res, temp);
            res = temp / gcd(res, temp) * res;
        }
        cout << res << endl;
    }

    return 0;
}
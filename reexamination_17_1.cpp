//  关羽过关斩三将，输入四个人的武力值（大于0小于50），若超过界限，需要重新输入
// 关羽的武力值x，将士武力值y，满足 (x-y)^2+(x-y)+41 为素数，则关羽获胜
// 关羽三次获胜输出 WIN；若失败就输出，则输出将领序号（第几关）

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

bool Judge(int a)
{
    if (a < 2) //小于2的数都不是素数
        return false;
    int bound = sqrt(a);
    for (int i = 2; i <= bound; i++)
        if (a % i == 0)
            return false;
    return true;
}

int main()
{
    int x, y[3],i;
    bool flag = true;
    cout<<" 输入关羽的武力值：";
    cin >> x;
    while (x <= 0 || x >= 50)
    {
        cout<<" 武力值超过界限，请重新输入：";
        cin >> x;
    }
    for (i = 0; i < 3; i++)
    {
        cout<<" 输入第"<<i+1<<" 个武将的武力值：";
        cin >> y[i];
        while (y[i] <= 0 || y[i] >= 50)
        {
            cout<<" 武力值超过界限，请重新输入：";
            cin >> y[i];
        }
    }
    for(i=0;i<3 && flag;i++){
        flag = Judge(pow(x-y[i],2)+x-y[i]+41);
    }
    if(flag)
        cout<<" WIN"<<endl;
    else
    {
        cout<<" 关羽输给第"<<i+1<<" 个将领"<<endl;
    }
    
    return 0;
}
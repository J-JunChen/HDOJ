// 猜数游戏：
// 随机生成三位的正整数，你来猜，猜十次，超过十次就ByeBye

#include <iostream>
#include <cstdio>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int x, guest, count;
    srand(time(0));
    // x = rand() % 1000; //只需要求余就可以获取随机三位正整数
    x = rand() % 900 + 100; //表示这三位正整数必定是大于100的
    cout << x << endl;
    count = 1;
    while (count <= 10)
    {
        cout << " 请输入你猜的三位正整数：";
        cin >> guest;
        if (guest == x)
        {
            cout << " 恭喜你，猜对了" << endl;
            break;
        }
        else if (guest < x)
        {
            cout << " 猜小了，请继续" << endl;
        }
        else
            cout << " 猜大了，请继续" << endl;
        count++;
    }
    if (count > 10)
        cout << "Bye Bye" << endl;
    return 0;
}

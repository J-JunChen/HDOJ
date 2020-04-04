//有个人从2003年1月1日开始，三天打鱼两天晒网，请输入月份、日期，问在当年的某一天他是在打鱼还是在晒网。

#include <iostream>
#include <cstdio>

using namespace std;

int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; //2003年每个月的天数,且day[0]只作填充

int main()
{
    int month, date;
    cin >> month >> date; //输入月份、日期
    int sum = 0;          //计算某一天在2003的总天数
    for (int i = month - 1; i >= 1; i--)
    {
        sum += day[i];
    }
    sum += date;
    if (sum % 5 >= 1 && sum % 5 <= 3)
        cout << " 他在当天打鱼。" << endl;
    else
        cout << " 他在当天晒网。" << endl;
    return 0;
}
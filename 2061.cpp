// 计算GPA

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, k, i;
    double gpa, credit;
    bool flag;
    while (scanf("%d", &n) != EOF)
    {
        while (n--)
        {
            cin >> k;
            string course[k];
            double credits[k], score[k];
            gpa = credit = 0;
            flag = true;
            for (i = 0; i < k; i++)
            {
                cin >> course[i] >> credits[i] >> score[i];
                if(!flag) continue;  //continue:直接略过下面三行，到达for的下一次循环；break:直接跳出for循环
                if (score[i] < 60)
                    flag = false;
                credit += credits[i];
            }
            if (flag)
            {
                for (i = 0; i < k; i++)
                {
                    gpa += credits[i] * score[i];
                }
                gpa /= credit;
                printf("%.2f\n", gpa);
            }
            else
            {
                printf("Sorry!\n");
            }
            if(n) putchar('\n');
        }
    }

    return 0;
}
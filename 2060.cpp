// 斯若克

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n;
    int ball_left, p_score, o_score;
    int score[7] = {7, 6, 5, 4, 3, 2, 1};
    while ((scanf("%d", &n) != EOF))
    {
        while (n--)
        {
            cin >> ball_left >> p_score >> o_score;
            if (ball_left > 6)
            {
                p_score += (ball_left - 6) * 8; //8为一次红球一分一次彩球七分
                for (int i = 0; i < 6; i++)
                    p_score += score[i];
            }
            else
            {
                for (int i = 0; i < ball_left; i++)
                    p_score += score[i];
            }

            puts(p_score >= o_score ? "Yes" : "No"); //三元比较利用puts输出一行
        }
    }

    return 0;
}
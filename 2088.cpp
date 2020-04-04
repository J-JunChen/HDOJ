// Box of Bricks

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

bool Compare(int a, int b)
{
    return a < b;
}

int main()
{
    int n, i, mid, step, c;
    int height[50];
    while (scanf("%d", &n) != EOF && n != 0)
    {
        if (c++)
            printf("\n"); //Output a blank between each set
        mid = step = 0;
        for (i = 0; i < n; i++)
        {
            cin >> height[i];
            mid += height[i];
        }
        mid /= n;
        sort(height, height + n, Compare);
        for (i = 0; i < n; i++)
            height[i] -= mid;
        for (i = 0; i < n; i++)
            if (height[i] > 0)
                step += height[i];
        cout << step << endl;
    }

    return 0;
}
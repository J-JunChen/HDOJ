// find the highest student.

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, m, i;
    double height, highest;
    while ((scanf("%d", &n) != EOF))
    {
        while (n--)
        {
            cin >> m;
            highest = 0.00;
            for (i = 0; i < m; i++)
            {
                cin >> height;
                if (highest < height)
                    highest = height;
            }
            printf("%.2f\n", highest);
        }
    }

    return 0;
}
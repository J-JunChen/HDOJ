// Picture Rectangle

#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int width, height;
    int i, j;
    while (scanf("%d%d", &width, &height) != EOF)
    {
        putchar('+');
        for (i = 0; i < width; i++)
        {
            putchar('-');
        }
        putchar('+');
        putchar('\n');
        for (j = 0; j < height; j++)
        {
            putchar('|');
            for (i = 0; i < width; i++)
                putchar(' ');
            putchar('|');
            putchar('\n');
        }
        putchar('+');
        for (i = 0; i < width; i++)
        {
            putchar('-');
        }
        printf("+\n\n");
    }

    return 0;
}
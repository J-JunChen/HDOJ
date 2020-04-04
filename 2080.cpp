// 两点分别与原点连线的夹角，0<degree<180

#include <iostream>
#include <cstdio>
#include <cmath>
#define PI 3.14159265

using namespace std;

int main()
{
    int n;
    double x1, y1, x2, y2; //四个实数
    double degree, degree1, degree2;
    scanf("%d", &n);
    while (n--)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        // degree1 = atan(y1/x1)*180/PI; 
        // degree2 = atan(y2/x2)*180/PI;
        // degree = degree2-degree1;
        // if(degree<0) degree = - degree;
        // if(degree>180) degree = 360 - degree;
        degree1 = asin(y1 / sqrt(pow(x1, 2) + pow(y1, 2))) * 180 / PI;
        degree2 = asin(y2 / sqrt(pow(x2, 2) + pow(y2, 2))) * 180 / PI;
        degree = degree2-degree1;
        if(degree<0) degree = - degree;
        if(degree>180) degree = 360 - degree;
        printf("%.2f\n", degree);
    }

    return 0;
}
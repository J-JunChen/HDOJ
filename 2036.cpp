// S△OAB 	= (x0 × y0 + x0 × y1 - x1 × y0 - x1 × y1 - x0 × y0 + x1 × y1) ÷ 2
//	        = (x0 × y1 - x1 × y0) ÷ 2

//多边形：S = 0.5 * ( (x0*y1-x1*y0) + (x1*y2-x2*y1) + ... + (xn*y0-x0*yn) )

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, x[3], y[3];
    double sum;
    while (cin >> n)
    {
        cin >> x[0] >> y[0];
        x[2] = x[0];
        y[2] = y[0];
        sum = 0.0;
        while (--n)
        {
            cin >> x[1] >> y[1];
            sum += x[0] * y[1] - x[1] * y[0];
            x[0] = x[1];
            y[0] = y[1];
        }
        sum += x[0] * y[2] - x[2] * y[0];
        cout << fixed << setprecision(1) << sum / 2 << endl;
    }

    return 0;
}
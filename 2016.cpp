//输入n(n<100)个数，找出其中最小的数，将它与最前面的数交换后输出这些数。

#include <iostream>
using namespace std;

int main()
{
    int n, min, index;
    int x[100];
    while (cin >> n)
    {
        if (n != 0)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> x[i];
                if (i == 0)
                {
                    min = x[0];
                    index = 0;
                }
                else
                {
                    if (min > x[i])
                    {
                        min = x[i];
                        index = i;
                    }
                }
            }
            if(index !=0){
                swap(x[0], x[index]);
            }

            for(int i = 0; i<n;i++)
            {
                if(i == 0)
                    cout<<x[i];
                else
                    cout<<" "<<x[i];
            }
                
            cout<<endl;
        }
    }

    return 0;
}
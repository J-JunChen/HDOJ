// LELE的RPG难题
#include <iostream>

using namespace std;

int main()
{
    int n; // n 为排成一行的方格
    __int64 d[51] = {0, 3, 6, 6};
    for(int i=4;i<51;i++)
    {
        d[i] = d[i-1] + 2*d[i-2];
    }
    while (cin >> n)
    {
        cout<<d[n]<<endl;
    }
    return 0;
}
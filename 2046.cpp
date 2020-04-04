// 骨牌铺方块

#include<iostream>

using namespace std;

int main(){
    int n;
    __int64 d[51] = {0,1,2,3};
    for(int i=4;i<51;i++)
        d[i] = d[i-1]+d[i-2];
    while (cin>>n)
    {
        cout<<d[n]<<endl;
    }
    
    return 0;
}
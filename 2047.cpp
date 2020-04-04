// 阿牛的EOF牛肉串

#include<iostream>

using namespace std;

int main(){
    int n;
    __int64 e[40] = {0,2,6};
    __int64 o[40] = {0,1,2};
    for(int i=3;i<40;i++){
        e[i] = 2*(e[i-1]+o[i-1]);
        o[i] = e[i-1];
    }
    while (cin>>n)
    {
        cout<<e[n]+o[n]<<endl;
    }
    
    return 0;
}
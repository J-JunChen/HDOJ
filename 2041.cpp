// 有一楼梯共M级，刚开始时你在第一级，若每次只能跨上一级或二级，要走上第M级，共有多少种走法？
// 输入数据首先包含一个整数N，表示测试实例的个数，然后是N行数据，每行包含一个整数M（1<=M<=40）,表示楼梯的级数。

#include<iostream>

using namespace std;

int fun(int n){ //斐波那契数列
    if(n == 1 || n==2) return 1;
    else if(n==3) return 2;
    else return fun(n-1)+fun(n-2); 
}

int main(){
    int n,m;
    while (cin>>n)  
    {
        for(int i=0; i<n ;i++){
            cin>>m;
            cout<<fun(m)<<endl;
        }
    }
    
    return 0;
}

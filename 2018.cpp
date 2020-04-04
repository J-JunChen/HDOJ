// 有一头母牛，它每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？

#include<iostream>

using namespace std;

int fun(int n){ //递归题
    if(n<=4)
        return n;
    else{
        return fun(n-3)+fun(n-1);
    }
}

int main(){
    int n;
    int sum;
    while (cin>>n) //n表示第n年
    {  
        if(n!=0){
            cout<<fun(n)<<endl;
        }
    }
    
    return 0;
}
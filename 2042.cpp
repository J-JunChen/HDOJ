// 输入数据第一行是一个整数N，下面由N行组成，每行包含一个整数a(0<a<=30),表示收费站的数量。最后只剩下三只
// 对于每个测试实例，请输出最初的羊的数量,每个测试实例的输出占一行。
#include<iostream>

using namespace std;

int main(){
    int n,a, sum;
    while (cin>>n)
    {
        for(int i=0;i<n;i++){
            cin>>a;
            sum = 3;
            for(int j =a; j>0 ; j--){
                sum = 2*(sum-1);
            }
            cout<<sum<<endl;
        }
    }
    
    return 0;
}
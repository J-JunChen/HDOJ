// 数列的定义如下：
// 数列的第一项为n，以后各项为前一项的平方根，求数列的前m项的和。
// INPUT:输入数据有多组，每组占一行，由两个整数n（n<10000）和m(m<1000)组成，n和m的含义如前所述。
// OUTPUT:对于每组输入数据，输出该数列的和，每个测试实例占一行，要求精度保留2位小数。

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int n,m;
    double temp, result;
    while(cin>>n>>m){
        result = 0;
        temp = n;
        for(int i=0;i<m;i++){
            result +=temp;
            temp = sqrt(temp);
        }
        cout<<fixed<<setprecision(2)<<result<<endl;
    }

    return 0;
}
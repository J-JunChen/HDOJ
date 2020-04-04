//求实数的绝对值。
#include<iostream>
#include<cmath>
#include<iomanip> //IO Manipulators
using namespace std;

int main(){
    double x;
    while(cin>>x){
        cout<<fixed<<setprecision(2)<<abs(x)<<endl;
        //abs主要是求int型的绝对值
        //浮点型数据就应该用fabs求绝对值。
    }
    return 0;
}
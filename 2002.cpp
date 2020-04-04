//根据输入的半径值，计算球的体积。
#include<iostream>
#include<cmath>
#include<iomanip>
#define PI  3.1415927
using namespace std;

int main(){
    double r, volume;
    while(cin>>r){
        volume = 4*PI*pow(r,3)/3;
        cout<<fixed<<setprecision(3)<<volume<<endl;
    }
    return 0;
}
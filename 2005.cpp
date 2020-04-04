//给定一个日期，输出这个日期是该年的第几天。
#include<iostream>
using namespace std;

int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; //从食指开始

int main(){
    int y,m,d;
    int day;
    while(~scanf("%d/%d/%d",&y,&m,&d)){
        if(y%4==0&&y%100!=0||y%400 == 0) //闰年判断
            month[2]=29;
        else   
            month[2]=28; //这个很关键，全局静态变量，需要修改回来
        for(day = 0; m>0; m--)
             day += month[m-1];
        day += d;
        cout<<day<<endl;
    }
    return 0;
    
}
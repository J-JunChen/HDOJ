// 输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下：
// 90~100为A;
// 80~89为B;
// 70~79为C;
// 60~69为D;
// 0~59为E;
#include<iostream>

using namespace std;

int main(){
    int score;
    while (cin>>score)
    {
        if(score<0 || score>100) cout<<"Score is error!"<<endl;
        else if(score>=0 && score<60) cout<<"E"<<endl;
        else if(score>=60 && score<70) cout<<"D"<<endl;
        else if(score>=70 && score<80) cout<<"C"<<endl;
        else if(score>=80 && score<90) cout<<"B"<<endl;
        else if(score>=90 && score<=100) cout<<"A"<<endl;
    }
    return 0;
}
// 发工资，求至少需要人民币张数
// 人民币有6种：100，50，10，5，2，1

#include<iostream>
using namespace std;

int main(){
    int n, i,people[101], sum;
    int money[6]={100,50,10,5,2,1};
    while (cin>>n)
    {
        if(n!=0){
            sum = 0; //人民币张数初始
            for(i = 0; i<n;i++)
                cin>>people[i];
            for(i=0;i<n;i++){

                for(int j = 0; j<6;j++){
                    sum += people[i] / money[j];
                    people[i] = people[i] % money[j];
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
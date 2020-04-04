// 找单词
#include<iostream>
#include<cstdio>

using namespace std;

int main(){
    int n,i,num;
    int value[26];
    int step[26];
    scanf("%d",&n);
    while (n--)
    {
        for(num = i=0;i<26;i++)
            cin>>value[i];
        for(step[0]= 0; step[0]<value[0];step[0]++)
            for(step[1] = 0;step[1]<value[1];step[1]++)
                for(step[2]=0;step[2]<value[2];step[2]++)
                    if(step[0]+2*step[1]+3*step[2] <=50) num++;
        cout<<num<<endl;
    }
    

    return 0;
}+















































































































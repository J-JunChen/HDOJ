// 三角形确定，两边相加大于第三边

#include<iostream>
#include<string.h>
#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
    int m;
    double side[3]; //题目说是要输入正数，而非整数
    while (scanf("%d",&m)!=EOF)
    {
        while(m--){
            memset(side,0,sizeof(side));
            for (int i = 0; i < 3; i++)
            {
                cin>>side[i];
            }
            sort(side, side+3);
            if(side[0]+side[1]>side[2])
                cout<<"YES"<<endl;
            else
            {
                cout<<"NO"<<endl;
            }
            
        }

    }
    return 0;
    

}
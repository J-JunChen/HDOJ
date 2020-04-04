#include<iostream>
#include<cmath>
// #include<iomanip>
#include<cstdio>
using namespace std;

int main(){
    double x1,y1,x2,y2;
    double result;
    // while(cin>>x1>>y1>>x2>>y2){
    //     result = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    //     cout<<fixed<<setprecision(2)<<result<<endl; // fixed 和 setprecison 都存在<iomanip>头文件中
    // }

    while (scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)!=EOF) //输入double型，用%lf
    {
        result = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        printf("%.2f\n",result);
    }
    
    return 0;
}


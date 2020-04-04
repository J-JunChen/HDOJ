// 多项式的描述如下：
// 1 - 1/2 + 1/3 - 1/4 + 1/5 - 1/6 + ...
// 现在请你求出该多项式的前n项的和。

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int m,temp;
    double x[100];
    while(cin>>m){
        for(int i = 0;i<m;i++){
            cin>>temp;
            x[i] = 1;
            for (int j=2;j<=temp;j++){
                if(j%2 == 0) x[i] -= 1/double(j);
                else x[i] += 1/double(j);
            }
        }
        for(int i =0; i<m ;i++){
            cout<<fixed<<setprecision(2)<<x[i]<<endl;
            printf("%.2lf\n",x[i]); //double型的输出2位小数格式
        }
       
    }
    return 0;
}
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int c,n;
    while (cin>>c)
    {
        for(int i=0;i<c;i++){
            cin>>n;
            cout<<fixed<<setprecision(2)<<100*1/double(n)<<"%"<<endl;
        }
    }
    
    return 0;
}
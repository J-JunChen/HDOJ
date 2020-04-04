// Switch Game

#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

#define Fun(x) (((int)x) *((int)x))

int main(){

    int n;
    while (scanf("%d", &n) != EOF)
    {
        printf("%d\n", Fun(sqrt(n)) == n );
    }
    

    return 0;
}
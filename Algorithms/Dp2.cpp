#include<bits/stdc++.h>
using namespace std;

int fib(int n ){
    if(n <= 1){
        return n;
    }else{
        return fib(n-1) + fib(n-2);
    }
}

//By using dynamic programming
int fibDyn(int n){
    int fib[n+2] ;
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2;i<=n;i++)
    fib[i] = fib[i-1] + fib[i+1];

    return fib[n];
}


int main(){
cout<<fib(9);
cout<<"\n";
cout<<fib(9);

    return 0;
}
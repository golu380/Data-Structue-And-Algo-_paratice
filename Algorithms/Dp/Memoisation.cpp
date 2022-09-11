#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    int memo[n+1];
    for(int i = 0;i<n+1;i++){
        memo[i] = -1;
    }
    if(memo[n] == -1){
        int res;
        if(n == 1 || n == 0)
        res = n;
        else
        res = fib(n-1)+fib(n-2);

        return res;

    }
    return memo[n];
}
int main(){
int n = 5;
cout<<fib(6);

    return 0;
}
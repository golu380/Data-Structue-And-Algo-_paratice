#include<bits/stdc++.h>
using namespace std;
void fib(int n){
int f[n+1];
f[0] = 0;
f[1] = 1;
for(int i = 2;i<n+1;i++){
    f[i] = f[i-1] + f[i-2];
}
cout<<"the nth fibonachi number is " << f[n]<<endl;
cout<<"And series is following "<<endl;
for(int i = 0;i<n+1;i++)
cout<<f[i]<<" ";
}

int main(){

fib(9);
    return 0;
}
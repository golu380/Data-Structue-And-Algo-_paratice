#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
 int f[n + 2];
    int i;

    f[0] = 0;
    f[1] = 1;
 
    for(i = 2; i <= n; i++)
    {

       f[i] = f[i - 1] + f[i - 2];
    }
   cout<<f[n]<<endl;

    return 0;
}
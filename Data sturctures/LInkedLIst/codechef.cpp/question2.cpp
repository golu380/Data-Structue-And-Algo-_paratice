#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int n,x;
while (t--)
{
   cin>>n>>x;
   if(n>= x){
       cout<<x<<endl;
   }else{
       int tm = x-n-1;
       cout<<tm<<endl;
   }
}


    return 0;
}
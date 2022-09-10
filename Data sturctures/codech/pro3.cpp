#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{
   int n;
   cin>>n;
   int ans = 0;
   for(int i = 1;i<= n;i++){
       if(i % 2 != 0){
           ans = ans + pow((n-i+1),2);
       }
   } 
   cout<<ans<<endl;
   


    return 0;
}
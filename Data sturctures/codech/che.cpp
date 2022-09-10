#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{
   long long i,n,sum = 0;
long long h = 0;
cin>>n;
for(i = 0;i<=n;i++)
if((sum + i)<=n){
    sum = sum + i;
h++;
}else{
    break;
}
cout<<h-1<<endl;



}


    return 0;
}
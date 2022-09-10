#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{
 int n;
 cin>>n;

 char arr[n];
 cin>>arr;
 int  xz = 0,yo=0;
 for(int i = 0;i<n;i++){
     if(arr[i] == '0') {
         xz++;
     }else{
         yo++;
     }
 }
 if(n%2 == 0){
     if(xz == yo){
         cout<<"YES"<<endl;
     }else if(xz%2 == 0 && yo%2 == 0){
         cout<<"YES"<<endl;
     }else{
         cout<<"NO"<<endl;
     }
 }else{
     cout<<"YES"<<endl;
 }

}


    return 0;
}
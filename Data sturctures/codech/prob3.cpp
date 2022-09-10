#include<bits/stdc++.h>
using namespace std;
bool check(int a,int b){
    if(a == b){
        return true;
    }else{
        return false;
    }
}
int main(){
int t;
cin>>t;
while (t--)
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
   int j = 1;
   int i = 0;
   int ans = 0;
   for(int i = 0;i<n;i++){
       if(check(arr[i],arr[i+1])){
           arr[i] = arr[i] + arr[i-1];
           ans++;
       }
   }
  
  cout<<ans<<endl;
}


    return 0;
}
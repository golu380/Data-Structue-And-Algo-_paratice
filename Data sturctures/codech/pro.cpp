#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{   int n;
cin>>n;
  int arr[n] ; 
  int arr1[n];
  for(int i = 0;i<n;i++)
  cin>>arr[i];
  for(int i = 0;i<n;i++)
  cin>>arr1[i];

sort(arr,arr+n);
// sort(arr1,arr1+n);
int i = n-1;
int j = 0;
while (i>=0)
{
 if(arr[i] == arr1[i])
 
 j++;
 i--;
}
if(j == n){
    cout<<"yes"<<endl;
}else{
    cout<<"no"<<endl;
}

}


    return 0;
}
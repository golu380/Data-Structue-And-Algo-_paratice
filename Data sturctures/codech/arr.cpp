#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[3];
while (n--)
{
   for(int i = 0;i<3;i++) 
   cin>>arr[i];

   sort(arr,arr+3);
   cout<<arr[1]<<endl;

   
}


    return 0;
}
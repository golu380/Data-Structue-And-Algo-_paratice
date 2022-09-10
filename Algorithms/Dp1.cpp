#include<bits/stdc++.h>
int minCoin(int arr[],int N,int n){
   int ans = 0;
  
   if(N == 0){
       return 0;
   }
   for(int i = 0;i<n;i++){
       int subprob = 0;
       if(N-arr[i] >= 0){
           subprob = minCoin(arr,N-arr[i],n);
       }
       if(subprob + 1 < ans)
       ans = subprob + 1;
      

   }
   return ans;
}

using namespace std;
int main(){
int arr[3] = {7,5,1}; int n = sizeof(arr)/sizeof(arr[0]);
cout<<minCoin(arr,18,n);


    return 0;
}
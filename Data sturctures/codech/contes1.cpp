#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while (t--)
{
   int n,x;
   cin>>n>>x;



   int arr[n];
   for(int i = 0;i<n;i++)
   cin>>arr[i];
   int maxp = 0;
   int sum = 0;
 

for(int i = 0;i<n;i++){
    sum  = sum+arr[i] ;
    maxp = max(maxp , sum);
}
   cout<<maxp+x<<endl;

}



    return 0;
}
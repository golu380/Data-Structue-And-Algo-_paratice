#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{
    int arr[10];
    for(int i = 0;i<10;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int i = 9;
    int j = 0;
    while (i >=0 && k>= 0)
    {
       k = k - arr[i];
       i--;
      j++;
    }
    cout<<10 -j +1<<endl;
    
  
    
}


    return 0;
}
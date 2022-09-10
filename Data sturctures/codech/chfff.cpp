#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while (t--)
    {
      int n;
      cin>>n;
      for(int i = 1;i<=n;i++){
          if(i==1 || i==n){
              cout<<"3"<<endl;
          }else{
              cout<<"0"<<endl;
          }
      }
    }
    
}
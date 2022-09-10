#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
  int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    int so = 0;
    int se = 0;
    for(int i =0;i<n;i++){
        if(i%2 == 0){
            se = se+arr[i];
        }else{
            so = so+arr[i];
        }
        ans = max(so,se);

    }
    cout<<ans<<endl;


    }
  

    return 0;
}
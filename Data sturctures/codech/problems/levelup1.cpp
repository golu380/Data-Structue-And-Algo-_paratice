#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool checkdiff(int a,int b,int d){
    if(a-b <= d){
        return true;
    }else if(a-b == 0){
        return false;
    }
    else{
        return false;
    }

    

}
int main(){
ll n;
cin>>n;
ll d;
cin>>d;
int arr[n];
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
sort(arr,arr+n);
ll num = 0;
ll i = 0;
ll j = 1;
int ans = 0;

while (j<n)
{
  if(checkdiff(arr[j],arr[i],d)){
      ans++;
      j++;
    
  }else{
      i = j;
      j = i+1;
  }
}

// for(int i = 0;i<n;i++){
//     cout<<arr[i];
// }

cout<<ans<<endl;

    return 0;
}
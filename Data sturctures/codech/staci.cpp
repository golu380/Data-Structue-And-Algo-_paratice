#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int t;
    cin>>t;
    while (t--)
    {
         ll n;
    cin>>n;
    ll arr[n];
    for(ll i = 0;i<n;i++){
        cin>>arr[i];

    }

vector<int> ans;
vector<int>::iterator it;
    for(ll i = 0;i<n;i++){
        ll rad = arr[i];
        it = upper_bound(ans.begin(),ans.end(),rad);
        if(it == ans.end()){
            ans.push_back(rad);
        }else{
            *it = rad;
        }

    }
    cout<<ans.size()<<" ";
for(auto x : ans){
    cout<<x<<" ";
}
cout<<endl;;
    }
    

return 0;
}
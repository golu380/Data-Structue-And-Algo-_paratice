#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

while (t--)
{  int n,x,y;
 cin>>n>>x>>y;
int a[n];
int b[n];
for(int i = 0;i<n;i++){
    cin>>a[i];
}
for(int i = 0;i<n;i++){
    cin>>b[i];
}
  int ind = 0;
for(int i = 0;i<n;i++){
    if((b[i] - a[i] == x) || (b[i] -a[i] == y)){
        ind++;
    }
}

cout<<ind<<endl;
if(ind == n){
    cout<<"YES"<<endl;
}else{
    cout<<"NO"<<endl;
}


}

    return 0;
}
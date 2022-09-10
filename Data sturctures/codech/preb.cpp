#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{
    int n,x,y;
    cin>>n;
    map<int,int> par;
    for(int i = 0;i<4*n;i++){
      cin>>x>>y;
        par.insert(pair<int,int>(x,y));
    }
    map<int,int>::iterator itr;
    for(itr = par.begin();itr != par.end();++itr){
        cout<<'\t'<<itr->first<<'\t'<<itr->second<<endl;
    }
}


    return 0;
}
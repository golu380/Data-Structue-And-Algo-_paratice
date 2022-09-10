#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{
   int n;
   cin>>n;
   int x,y;
   set<int> s1;
   set<int> s2;

 for(int i = 0;i<n;i++){
cin>>x>>y;
s1.insert(x);
s2.insert(y);
 }
 cout<<s1.size()+s2.size()<<endl;
   
}


    return  0;
}
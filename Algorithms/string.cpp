#include<bits/stdc++.h>
using namespace std;


int main(){
int t;
cin>>t;
while (t--)
{
    string str;

getline(cin,str);
int n = str.size();
int ans = 0;
for(int i = 0;i<n;i++){
    if(str[i] != str[i+1])
    ans++;
    
}
cout<<ans/2<<endl;
}


    return 0;
}
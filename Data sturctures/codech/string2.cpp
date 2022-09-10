#include<bits/stdc++.h>
using namespace std;
int main(){
// int t;
// cin>>t;
// while (t--)
// {
//     /* code */
// }
int count[26]{0};
string a,b;
cin>>a>>b;
for(int i = 0;i<a.length();i++){
    count[a[i]-97]++;
}
for(int i = 0;i<26;i++){
    cout<<count[i]<<" ";
}

for(int j = 0;j<a.length();j++){
    count[b[j]-97]++;
}
cout<<endl;
for(int i = 0;i<26;i++){
    cout<<count[i]<<" ";
}



    return  0;
}
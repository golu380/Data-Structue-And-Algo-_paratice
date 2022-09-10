#include<bits/stdc++.h>
using namespace std;
bool check(string prstr,string cstr){
int n = prstr.size();
int m = cstr.size();
int i,j;
i =0,j = 0;
while (i<n || j<m)
{
   if(prstr[i] == cstr[j]){
      i++;
      j++;
   }else{
       i++;
   }
}
cout<<i<<" "<<j<<endl;
if(i == n || j== m){
    return false;
}else{
    return true;
}


}
int main(){
// int t;
// cin>>t;
// while (t--)
// {
//     /* code */
// }
// string a;
// string b;
// cin>>a>>b;
// string c = a+b;
// int n;
// cin>>n;
// string str[n];
string str = ""



    return 0;
}
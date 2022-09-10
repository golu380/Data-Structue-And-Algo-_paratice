#include<bits/stdc++.h>
using namespace std;
int greatesDigit(int n){
    return (pow(10,n)-1);
}
int smallestDigit(int n){
  
 int res = pow(10,n-1) +1;
 return res;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       int n;
cin>>n;
for(int i = smallestDigit(n);i<=greatesDigit(n);i++){
    if(i % 3 == 0 && i%9 != 0 && i%2 != 0){
        cout<<i<<endl;
        break;
    }
}

    }
    

    return 0;
}
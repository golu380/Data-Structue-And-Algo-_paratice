#include<bits/stdc++.h>
using namespace std;
string xooor(char str[],int n){
    string str2;
    for(int i = 0;i<n;i++){
         str2[i] = (str[i] ^ str[i+1]);
    }
return str2;
}
string isPalindrome(string S)
{
    
    string P = S;

    reverse(P.begin(), P.end());

    if (S == P) {
       
        return "Yes";
    }
  
    else {
       
        return "No";
    }
}
int main(){
int n;
// scanf("%d",n);
 char str[n];
 gets(str);
 puts(str);

string str2 = xooor(str,n);
cout<<str2;

return 0;
}
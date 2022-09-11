#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int n,int m){
    if(n == 0 || m == 1){
        return 0;
    }else{
        if(s1[n-1] == s2[m-1]){
            return 1+lcs(s1,s2,n-1,m-1);
        }else{
            return max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
        }
    }
}
int memolcs(string s1,string s2,int n,int m){
    int arr[n+1][m+1];
    for(int i = 0;i<n+1;i++){
        for(int j = 0;j<m+1;j++){
            arr[i][j] = -1;
        }
    }
    if(arr[n][m] != -1)
    return arr[n][m];
    if(n == 0 || m == 0)
    arr[n][m] =0;
    else{
        if(s1[m-1] == s2[n-1]){
            arr[n][m] = 1+memolcs(s1,s2,n-1,m-1);

        }else{
            arr[n][m] = max(memolcs(s1,s2,n-1,m),memolcs(s1,s2,n,m-1));
        }
    }
    return arr[n][m];
 
}
int tebulationlcs(string s1,string s2){
    int m = s1.length();
    int n = s2.length();
    int dp[m+1][n+1];
    for(int i = 0;i<=m;i++)
    dp[i][0] = 0;
    for(int j = 0;j<=n;j++)
    dp[0][j] = 0;

    for(int i = 1;i<=m;i++){
        for(int j = 1;j<=n;j++){
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = 1+dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}
int main(){
string s1 = "amitkumardubey";
string s2 = "ankitsumitdueby";
cout<<lcs(s1,s2,s1.length(),s2.length())<<endl;
cout<<memolcs(s1,s2,s1.length(),s2.length())<<endl;
cout<<tebulationlcs(s1,s2)<<endl;

    return 0;
}
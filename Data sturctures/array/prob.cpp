#include<bits/stdc++.h>
using namespace std;
int findsum(vector<int> a){
    int sum = 0;
    for(int i = 0;i<a.size();i++){
        sum =sum + a[i];
    }
    return sum;
}
vector<vector<int>> findArr(vector<int> v){
    int n = v.size();
    vector<vector<int>> ans;
    vector<int> a;
   int l = 0;
   int m = 2;
   while (m<n)
   {    a.push_back(v[l]);
        a.push_back(v[m]);
      ans.push_back(a);
      l++;
      m++;
   }
   return ans;
}
   
int findsuss(vector<vector<int>> v){
    int sum1 = 0;
    for(int i = 0;i<v.size();i++){
       int sum2  = findsum(v[i]);
       sum1 = max(sum1,sum2);
    }
    return sum1;
}
int main(){

int n;
cin>>n;
vector<int> v;
for(int i = 0;i<n;i++){
   int elm;
   cin>>elm;
   v.push_back(elm);
}


vector<vector<int>> answer;
answer = findArr(v);
int sum = findsuss(answer);
for(int i = 0;i<answer.size();i++){
    for(int j = 0;j<answer[i].size();j++){
        cout<<answer[i][j]<<" ";
    }
    cout<<endl;
}
cout<<sum<<endl;
    return 0;
}
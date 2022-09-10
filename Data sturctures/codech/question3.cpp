#include<bits/stdc++.h>
using namespace std;


int main(){
int t;
int n;
cin>>t;
while (t--)
{cin>>n;
int arr[n];
for(int i = 0;i<n;i++)
cin>>arr[i];
int count = 0;
for(int i = 0;i<n;i++){
    int iid = 1 + i + count;
    if(iid == arr[i])
    count++;
}
cout<<count<<endl;
    
}

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
int sum = 0;
for(int i = 0;i<n;i++){
    cin>>arr[i];
}
for(int i = 0;i<n;i++){
    for(int j = i+1;j<n;i++){
        for(int k = j ;k<j;j++){
            if(i != j || j != k){
                sum = sum+ ((arr[i]-arr[j])* (arr[j]-arr[k]));
            }
        }
    }
    
}
cout<<sum<<endl;


    return 0;
}
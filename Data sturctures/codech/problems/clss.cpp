#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of subjects"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"enter respective marks"<<endl;
    int sum = 0;
    for(int i = 0;i<n;i++)
    cin>>arr[i];
    for(int i = 0;i<n;i++){
     sum += arr[i];
    }
    int avg = sum/n;
    cout<<"the average is:"<<endl;
    cout<<avg<<endl;


    return 0;
}
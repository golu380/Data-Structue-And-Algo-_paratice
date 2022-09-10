#include<bits/stdc++.h>
using namespace std;
bool findcount(int arr[],int n){
    int lcount = 0;
    int gcount = 0;

    for(int i = 0;i<n;i++){
        for(int j = i+ 1;j<n;j++){
            if(arr[i]>arr[i+1]){
                    lcount++;
            }if(arr[i]>arr[j]){
                gcount++;
            }
        }

    }
    // cout<<gcount<<"  "<<lcount;
    if(gcount == lcount)
    return true;
    else
    return false;
}
int main(){
int arr[] = {1,0,2};
int n = sizeof(arr)/sizeof(arr[0]);

int nums[] = {1,2,0};

if(findcount(arr,n)){
    cout<<"good"<<endl;
}else{
    cout<<"No"<<endl;
}
if(findcount(nums,n)){
    cout<<"good"<<endl;
}else{
    cout<<"No"<<endl;
}


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }


void generateAll(int n,int arr[]){
    int i = 0;
    if(i == n){
        printArray(arr,n);
        return ;
    }
    arr[i] = 0;
    

}
void generateAllBInary(int n, int arr[]){
    int size = sizeof(arr)/sizeof(arr[0]);
if(n<1){
    printArray(arr,size);
}else{
    arr[n-1] = 0;
    generateAllBInary(n-1,arr);
    arr[n-1] = 1;
    generateAllBInary(n-1,arr);

}
}

int main(){
int n = 4;
int arr[n];
generateAllBInary(n,arr);

    return 0;
}
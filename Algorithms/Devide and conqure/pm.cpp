#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int l,int r,int x){
  
    if(l<=r){
        int mid = l + (l-r)/2;
    
    
    if(arr[mid] >= x)
    return BinarySearch(arr,mid+1,r,x);
    else if(arr[mid] == x)
    return mid;
    else 
    return BinarySearch(arr,l,mid,x);
    }
}
void merge(int arr[],int left,int mid,int right){
    int subArrayOne = mid - left + 1;
    int subArraytwo = right - mid;
    int* leftArray = new int[subArrayOne];
    int* rightArray = new int[subArraytwo];
    // int leftArray[subArrayOne];
    // int rightArray[subArraytwo];
    for(int i = 0;i<subArrayOne;i++){
        leftArray[i] = arr[left + i];
    
    }
    for(int j =0;j<subArraytwo;j++){
        rightArray[j] = arr[mid+1 + j];
    }
    int indexOfSubArrayOne = 0,
    indexOfSubArraytwo = 0,
    indexofMergedArray = left;
    while (indexOfSubArrayOne <  subArrayOne && indexOfSubArraytwo < subArraytwo )
    {
       if(leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArraytwo]){
        arr[indexofMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
       }else{
           arr[indexofMergedArray] = rightArray[indexOfSubArraytwo];
           indexOfSubArraytwo++;
       }
       indexofMergedArray++;

    
    }
 while(indexOfSubArrayOne < subArrayOne){
     arr[indexofMergedArray] = leftArray[indexOfSubArrayOne];
     indexOfSubArrayOne++;
     indexofMergedArray++;
 }
while (indexOfSubArraytwo < subArraytwo)
{
    arr[indexofMergedArray]  = rightArray[indexOfSubArraytwo];
    indexOfSubArraytwo++;
    indexofMergedArray++;
}

}
void mergeSort(int arr[],int begin,int end){
    if(begin >= end)
    return;
    int mid = begin + (end - begin)/2;
    mergeSort(arr,begin,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,begin,mid,end);
}
void prinArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){
int Arr[]= {23,12,45,34,78,96,56,44,4,4};
int n = sizeof(Arr)/sizeof(Arr[0]);
prinArr(Arr,n);
cout<<endl;
mergeSort(Arr,0,n-1);
prinArr(Arr,n);

int result = BinarySearch(Arr,0,n-1,78);
(result == -1)
? printf("element is not found"):
printf("Elements is found %d",result);

    return 0;
}
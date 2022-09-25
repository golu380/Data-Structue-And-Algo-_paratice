#include<bits/stdc++.h>
using namespace std;

void calculateSpan(int a[], int n, int ans[]){
    ans[0] = 1;
//calculate span values for rest of the elements
for(int i = 1;i<n;i++){
    int counter = 1;
    while((i-counter)>= 0 && a[i] >=a[i-counter]){
        counter += ans[i-counter];
    }
    ans[i]  = counter;
}
}
void printArray(int arr[],int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//A stack based approach:
//int this approach, I have used the data structure stack to
//implete this task

//Here two stacks are used.One stack stores the actual stock price
//whereas the other stack is temporary stack

//just to take input values, I have taken array 'price' and to
//store output used array 'span'
vector<int> calculatespanstack(int arr[], int n){
    stack<int> s;
    vector<int> ans;
    for(int i = 0;i<n;i++){
        while(!s.empty() && arr[s.top()] <= arr[i])
        s.pop();
        if(s.empty()){
            ans.push_back(i+1);
        }else{
            int top = s.top();
            ans.push_back(i-top);
        }
        s.push(i);
    }
    return ans;
}
void printvector(vector<int> v){
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<< " ";
    }
}
int main(){
int price[] = {10,4,5,90,120,80};
int n = sizeof(price)/sizeof(price[0]);
int s[n];
calculateSpan(price,n,s);
printArray(s,n);
vector<int> arr = calculatespanstack(price,n);
cout<<endl;
printvector(arr);
    return 0;
}
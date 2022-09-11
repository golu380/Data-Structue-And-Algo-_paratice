#include<bits/stdc++.h>

using namespace std;
void func1(int n){
    if(n>0){
        func1(n-1);
        cout<<n<<" ";
    }
}
void func(int n){
    if(n>0){
        cout<<n<<" ";
        func(n-1);
    }
}
int main(){
int n;
cin>>n;
func1(n);
cout<<endl;
func(n);

    return 0;
}
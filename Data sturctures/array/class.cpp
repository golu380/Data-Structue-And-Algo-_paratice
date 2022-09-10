#include<bits/stdc++.h>
using namespace std;
inline int larger(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
inline int smaller(int a,int b){
    if(a>b){
        return b;
    }else{
        return a;
    }
}
void test(){
    static int x = 1;
    int y = 1;
    x = ++x;
    y = ++y;
    cout<<x<<y;
}
int main(){
    // cout<<"Enter the numbers which you want to compare:";
//     int a,b;
//     cin>>a>>b;

// int l = larger(a,b);
// cout<<"the lareger number is :"<<l<<endl;
// int s = smaller(a,b);

// cout<<"the smaller name is:"<<s<<endl;
test();
test();
    return 0;
}
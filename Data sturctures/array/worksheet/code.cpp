#include<bits/stdc++.h>
using namespace std;
inline int MAX(int A,int B,int C){
     int largest;
  largest = A > B ? (A > C ? A : C) : (B > C ? B : C);
}
inline int MIN(int A,int B,int C){
     int largest;
  largest = A < B ? (A < C ? A : C) : (B < C ? B : C);
}
int main(){
    int a,b,c;
    cout<<"Enter the theree numbers: ";
    cin>>a>>b>>c;

    int max = MAX(a,b,c);
    cout<<"the maximum number is:"<<max<<endl;
    int min = MIN(a,b,c);
    cout<<"the minimum number is :"<<min<<endl;

    return 0;
}
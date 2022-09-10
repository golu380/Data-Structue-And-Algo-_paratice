#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int n;
cin>>n;
int c1,c2,c3;
c1 = n/2;
c2 = n/3;
c3 = n/4;
long long int sum = c1+c2+c3;
if(sum>n){
    n = sum;
}
cout<<n<<endl;

    }
    


    return 0;
}
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
   
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
int arr[2]={-1,-1};
for(int i = 1;i<=n;i++){
if(isPrime(i)){
   if(isPrime(n-i)){
       arr[0] = i;
       arr[1] = n-i;
   }
}

}
cout<<arr[0]<<" "<<arr[1]<<endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){

long long int num ;
cin>>num;
int sum = 0;
while (num != 0);
{
  sum = sum + num%10;
   num = num/10;
}

cout<<sum<<endl;

    return 0;
}
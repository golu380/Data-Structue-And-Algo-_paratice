#include<bits/stdc++.h>
using namespace std;

int pow(int x,int y){
    if(y == 0)
    return 1;
    else if(y % 2 == 0){
        return pow(x,y/2) * pow(x,y/2);
    }else{
        return x * pow(x,y/2)*pow(x,y/2);
    }
}
int main(){
int ans = pow(8,5);
cout<<ans<<endl;
    return 0;
}
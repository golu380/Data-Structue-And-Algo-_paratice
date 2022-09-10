#include<bits/stdc++.h>
using namespace std;
class sum{
    public:
    int a,b;

};
int main(){
sum s;
cin>>s.a;
cin>>s.b;
int sum = 0;
for(int i = s.a;i<=s.b;i++){
    if(i%2 != 0){
        sum = sum + i;
    }

}
cout<<sum<<endl;


    return 0;
}
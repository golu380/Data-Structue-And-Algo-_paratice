#include<bits/stdc++.h>
using namespace std;
int main(){
int q;
cin>>q;
stack<int>st;
while (q--)
{

  int n;
  cin>>n;
  int elm;
  if(n == 1){
      cin>>elm;
      st.push(elm);

  }
  if(n == -1){
int top = st.top();
cout<<top<<endl;
st.pop();
if(st.empty()){
    cout<<"Kuchbhi?"<<endl;
}
  }
}



    return 0;
}

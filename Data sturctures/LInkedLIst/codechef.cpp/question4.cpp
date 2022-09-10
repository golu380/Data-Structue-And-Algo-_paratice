#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
       map<int,int> m;
int n;
cin>>n;
for(int i = 0;i<2*n;i++){
    int x;
    cin>>x;
    m[x]++;
}

  map<int, int>::iterator itr;
    cout << "\nThe map gquiz1 is : \n";
    cout << "\tKEY\tELEMENT\n";
for(int i = 0;i<n;i++){
    m[i]->first;
}
  
    }
    

    return 0;
}
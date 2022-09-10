#include<bits/stdc++.h>
using namespace std;
int len(string str){
    int maxlen = 0;
    int start = -1;
    vector<int> v(256,-1);
  
    for(int i = 0;i<str.size();i++){
        if(v[str[i]]> start)
            start = v[str[i]];
        v[str[i]] = i;
        maxlen = max(maxlen,i-start);
    }
    return maxlen;
}
int main(){
//     vector<int> v(256,-1);
// //     for( int i = 0; i < 256; i++ ) {
// //    cout << "Element " << i << " is " << v.at(i) << endl;
// //  }
//  cout<<v['a']<<endl;
//  cout<<v['b']<<endl;
//  cout<<v['c']<<endl;
//  cout<<v['d']<<endl;
//  cout<<v['e']<<endl;
//  cout<<v['a']<<endl;
string str;
cin>>str;
cout<<len(str);

    return 0;
}
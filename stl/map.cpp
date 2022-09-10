#include<bits/stdc++.h>
using namespace std;
int main(){

map<int, int> guiz1;
guiz1.insert(pair<int,int>(1,41));
guiz1.insert(pair<int,int>(2,42));
guiz1.insert(pair<int,int>(3,43));
guiz1.insert(pair<int,int>(4,44));
guiz1.insert(pair<int,int>(5,45));
guiz1.insert(pair<int,int>(6,46));
guiz1.insert(pair<int,int>(7,47));
guiz1.insert(pair<int,int>(8,48));
guiz1.insert(pair<int,int>(9,49));

//printing map gquiz
map<int,int> :: iterator itr;
cout<<"\n The map gquiz1 is : \n";
cout<<"\tKEY\tELEMENT\n";
for(itr = guiz1.begin(); itr != guiz1.end();++itr){
    cout<<"\t"<<itr->first << "\t"<<itr->second<<endl;
}
cout<<endl;
//assingnig the elements from gquiz1 to gquiz3
map<int, int> gquiz2(guiz1.begin(),guiz1.end());
cout<<"\n The map gquiz2 after"
        <<"assign from gquiz1 is : \n";
    cout<<"\t KEY\tELEMENT\n";
    for(itr = gquiz2.begin();itr != gquiz2.end();++itr){
        cout<<'\t'<<itr->first<<'\t'<<itr->second<<endl;
    }
        cout<<endl;

    cout<<"\ngquiz2 after removal of "
        "elements less than key = 3 :\n";


    return 0;
}
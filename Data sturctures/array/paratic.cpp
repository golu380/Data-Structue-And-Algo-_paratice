#include<bits/stdc++.h>
using namespace std;
class Voter{
    public:
    int age;
    int *id;
    Voter(int a,int b){
        age = a;
        id = new int;
        *id = b;

    }
    void update(){
      age = age+1;
      *id = *id + 1;
    }
    void display(){
        cout<<age<<"  "<<*id<<endl;
    }
};
int main(){
Voter vot(23,45);
Voter vot1 = vot;
vot.display();
vot1.display();
vot.update();
cout<<endl;
vot1.display();
cout<<"value after updation is:"<<endl;
vot.display();

vot1.display();

    return 0;
}
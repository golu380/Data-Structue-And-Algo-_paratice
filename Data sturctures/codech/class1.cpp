#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
int rollno ;
float marks;
void display(){
    cout<<rollno;
    cout<<"  ";
    cout<<marks;
}
void getData(){
    cin>>rollno;
    cin>>marks;

}
};

int main(){
    cout<<"Enter the numebr of student: ";
    int n;
    cin>>n;

    Student s1[n];
for(int i = 1;i<=n;i++){
    cout<<"Enter the data of stduents  "<<i<<" ";
    s1[i].getData();
    cout<<endl;
}
for(int i = 1;i<=n;i++){
    cout<<"the data of stduents is:"<<i<<" ";
    s1[i].display();
   
}
 
   


return 0;
}
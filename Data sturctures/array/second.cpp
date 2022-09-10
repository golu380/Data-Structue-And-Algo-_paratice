#include<bits/stdc++.h>
using namespace std;
class Student{
  public:
    int rollno;
    int marks;
    Student();
    ~Student();
    void display();
};
Student::Student(){
rollno = 34;
marks = 3333;
cout<<"I am constructor"<<endl;
}
Student::~Student(){
cout<<"I am disstructor"<<endl;
}
void Student::display(){
    cout<<marks<<" "<<rollno<<endl;
}
int main(){

Student s1;
s1.display();
Student s2;
s2.display();
    return 0;
}
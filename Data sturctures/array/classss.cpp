#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    static int roll;
    
};
int Student::roll;
int main(){

 Student s[2];
 s[0].roll = 233;
 s[1].roll = 34;
 cout<<s[0].roll<<s[1].roll<<endl;


    return 0;
}
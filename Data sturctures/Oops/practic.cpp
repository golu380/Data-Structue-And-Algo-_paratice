#include<bits/stdc++.h>
using namespace std;
class Student{

    int id;
    string name;
    long long int mo_no;
    int sailary;
    public:
   Student(int idd,string nam,long long int mobile_no,int sail){
       id = idd;
     
       mo_no = mobile_no;
       sailary = sail;
   };

};


int main(){

Student s1 =  Student(1677,"Amit",9798301958,2500);




    return 0;
}
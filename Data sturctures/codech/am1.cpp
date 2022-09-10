#include<iostream>

using namespace std;

      class Employee

      {

             char Name[25];

             int Age;

             char Desg[8];

             long Salary;

             public:

             void GetData();

             void PutData();

      };

      void Employee :: GetData()          //Statement 1 : Defining GetData()

      {

              cout<<"\n\tEnter Employee Name : ";

             cin>>Name;

             cout<<"\n\tEnter Employee Age : ";

             cin>>Age;

                     cout<<"\n\tEnter Employee Designation:";

             cin>>Desg;



             cout<<"\n\tEnter Employee Salary : ";

             cin>>Salary;

      }



      void Employee :: PutData()          //Statement 2 : Defining PutData()

      {

             cout<<"\nEmployee Name : "<<Name;

             cout<<"\nEmployee Age : "<<Age;

             cout<<"\nEmployee Designation:"<<Desg;

             cout<<"\nEmployee Salary : "<<Salary;

      }



      int main()

      {

             Employee E[5];          //Statement 3 : Creating Object

             int i;

             for(i=0;i<5;i++)

             {

               E[i].GetData();         //Statement 4 : Calling GetData()

             }

             for(i=0;i<5;i++)

             {

               E[i].PutData();         //Statement 5 : Calling PutData()

             }

             return 0;



      }
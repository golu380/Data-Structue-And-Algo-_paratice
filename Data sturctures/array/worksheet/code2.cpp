#include<bits/stdc++.h>
#define MAX_SIZE 50
using namespace std;
class Guest{
    public:
    char name[50];
    int seatno;
};
class Hall{
    public:
    static int front,rear;
    static Guest allGuest[MAX_SIZE];
    static int alloteSeat(){
        if(rear == (MAX_SIZE -1)){
            cout<<"Hall is full!";
            return 0;
        }
        rear++;
        cout<<"Enter Guest Name: ";
        cin>>allGuest[rear].name;
        allGuest[rear].seatno = rear + 1;
        return 1;

    }
    static void listGuest(){
     while(++front <= rear){
         cout<<"\nGuest "<<allGuest[front].name<<" is seated on seat s"<<allGuest[front].seatno<<".";
     }
     rear = front = -1;
    }
};
int Hall::front = -1;
int Hall::rear = -1;
Guest Hall::allGuest[MAX_SIZE] = {};

int main(){
Hall::alloteSeat();
Hall::alloteSeat();
Hall::alloteSeat();
Hall::alloteSeat();
Hall::listGuest();

    return 0;
}
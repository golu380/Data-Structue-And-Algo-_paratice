#include<bits/stdc++.h>
using namespace std;
class DLL {
    public:
DLL * prev;
DLL * next;
int data;

DLL(int val){
    data = val;
    prev = NULL;
    next = NULL;
}
};

void pushAtbegining(DLL *&head, int data){
    DLL *new_node = new DLL(data);
    new_node->next = head;
    if(head !=NULL){
        head->prev = new_node;
    }

    head = new_node;
   
}
void apend(DLL *&head, int data){
    DLL * new_node = new DLL(data);
    DLL *temp = head;
    if(head == NULL){
        pushAtbegining(head,data);
    }
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->prev = temp;

}

void printDLL(DLL *head){
 DLL* temp = head;
 while(temp!= NULL){
    cout<<temp->data<< " ";
    temp= temp->next;
 }
}

int main(){
DLL * head = NULL;
pushAtbegining(head,23);
pushAtbegining(head,25);
pushAtbegining(head,27);
pushAtbegining(head,244);
pushAtbegining(head,299);


cout<<"the inserted linked list is in given system is"<<endl;
printDLL(head);

cout<<"list after inserting elements at end: "<<endl;
apend(head,27);
apend(head,29);
apend(head,278);
apend(head,22);
apend(head,209);
printDLL(head);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class DLLNode
{
private:
  
public:
  int data;
  DLLNode* next;
  DLLNode* prev;
  DLLNode(int val){
      data = val;
      prev = NULL;
      next = NULL;
  }
    
};
void DeleteElement(DLLNode* &head,int val){
    DLLNode*temp = head;
    DLLNode* todlete ;
    while(temp->next->data != val){
        temp = temp->next;
    }
    todlete = temp->next;
    temp->next = todlete->next;
    delete todlete;
    temp->next->prev = temp;

}

void InsertElemntAtHead(DLLNode* &head,int val){
    DLLNode* New_node = new DLLNode(val);
    New_node->next = head;
    New_node->prev = NULL;
    if(head != NULL){
        head->prev = New_node;
    }
    head = New_node;
 
   
}
void Append(DLLNode* &head,int val){
    DLLNode* new_node = new DLLNode(val);
    new_node->next = NULL;
    if(head == NULL){
        new_node->prev = NULL;
        head = new_node;
    }
    DLLNode* last = head;
    while (last->next != NULL)
    last = last->next;

    last->next = new_node;
    new_node->prev = last;

    

}
void DleteAtHead(DLLNode* &head){
    if(head == NULL){
        cout<<"List is empty"<<endl;
    }
    DLLNode * temp = head;
    head = head->next;
    delete temp;
    head->prev = NULL;
}
void InsertAtMiddle(DLLNode* &head,DLLNode *prev_Node,int val){
    DLLNode* new_Node = new DLLNode(val);
    if(prev_Node == NULL ){
        cout<<"Previous node can not be NULL"<<endl;
    }
        new_Node->next = prev_Node->next;
        prev_Node->next = new_Node;
        new_Node->prev = prev_Node;
        if(new_Node->next != NULL){
            new_Node->next->prev = new_Node;
        }
        

}
void DeleteAtEnd(DLLNode * &head){
    DLLNode* temp = head;
    DLLNode *Lnode;
    while(temp->next != NULL){
        temp = temp ->next;
    }
    Lnode = temp->prev;
    delete temp;
    Lnode->next = NULL;
}

void printList(DLLNode* node)
{
    DLLNode* last;
    cout<<"\nTraversal in forward direction \n";
    while (node != NULL)
    {
        cout<<" "<<node->data<<" ";
        last = node;
        node = node->next;
    }
 
    cout<<"\nTraversal in reverse direction \n";
    while (last != NULL)
    {
        cout<<" "<<last->data<<" ";
        last = last->prev;
    }
}



int main(){

DLLNode * head = NULL;
InsertElemntAtHead(head,45);
InsertElemntAtHead(head,33);
InsertElemntAtHead(head,98);
InsertElemntAtHead(head,12);
InsertElemntAtHead(head,56);
printList(head);

Append(head,12);
Append(head,19);
Append(head,17);
Append(head,144);

InsertAtMiddle(head,head->next->next,33333);

printList(head);
cout<<"List After deleting head is "<<endl;
DleteAtHead(head);
printList(head);
cout<<"List after deleting List elelment is: "<<endl;
DeleteAtEnd(head);
printList(head);
cout<<"LIst Ater delete the spacial lement"<<endl;
DeleteElement(head,45);
DeleteElement(head,33);
printList(head);
    return 0;
}
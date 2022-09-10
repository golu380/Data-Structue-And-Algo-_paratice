#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode * next;
    ListNode(int val){
        data = val;
        next = NULL;
    }

};

   
    

void deleteAtHead(ListNode * &head){
    if(head == NULL){
        // cout<<"Linked List has no any elements to be deleted"<<endl;
        printf("List has no any elements");
    }
    ListNode* temp = head;
    head = head->next;
    delete temp;
}
void deleteNode(ListNode * &head,int val){
    if(head == NULL){
        // cout<<"List does not consists of any elements"<<endl;
        printf("List does nto consists of any elements")

    }if(head->next == NULL){
        deleteAtHead(head);
    }
    ListNode* temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    ListNode* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
    
}

void insertAtTail(ListNode* & head,int val){
    ListNode* new_Node = new ListNode(val);
    if(head ==NULL){
        head = new_Node;
        return;
    }
    ListNode* temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_Node;
    
}
void insertAtGivenPosition(ListNode* &head, ListNode* givenPos, int val){
    ListNode* temp = head;
    ListNode* Nnode = new ListNode(val);
    int i = 0;
    while(temp!= givenPos){
    temp = temp->next;
    i++;
    }
     temp = Nnode;
     temp->next = givenPos->next;
    givenPos->next = temp;
    
   
   printf("%d\n",i);
    
}
void InserAtHead(ListNode* &head,int val){
    ListNode* new_Node = new ListNode(val);
    if(head==NULL){
        head = new_Node;
        return;
    }
    new_Node->next = head;
    head = new_Node;
}

void Display(ListNode *head){
    ListNode* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int LengthLinkedList(ListNode* l1){
    ListNode* temp = l1;
    int length = 0;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;

}
ListNode* addList(ListNdoe* head1,ListNode* head2 ){

}
// ListNode* addSameSize(ListNode* head1, ListNode* head2 )
// {
//    int* carry = 0;
//     if (head1 == NULL)
//         return NULL;
 
//     int sum;
 
//     // Allocate memory for sum node of current two nodes
//     ListNode* result = new ListNode();
 
//     // Recursively add remaining nodes and get the carry
//     result->next
//         = addSameSize(head1->next, head2->next, carry);
 
//     // add digits of current nodes and propagated carry
//     sum = head1->data + head2->data + *carry;
//     *carry = sum / 10;
//     sum = sum % 10;
 
//     // Assign the sum to current node of resultant list
//     result->data = sum;
 
//     return result;
// }
void DoSameList(ListNode* l1,ListNode* l2){
    int diff = 0;
    int size1 = LengthLinkedList(l1);
    int size2 = LengthLinkedList(l2);
    if(size1>=size2){
        diff = LengthLinkedList(l1) - LengthLinkedList(l2);
        while(diff--){
        insertAtTail(l2,0);
        }
    }else{
        diff = LengthLinkedList(l2) - LengthLinkedList(l2);
         while(diff--){
        insertAtTail(l1,0);
        }
    }
    
}
int main(){
// ListNode *head = NULL;
// insertAtTail(head,66);
// insertAtTail(head,86);
// insertAtTail(head,76);

// insertAtTail(head,6);
// insertAtTail(head,46);

// insertAtTail(head,99);
// insertAtGivenPosition(head,head->next,33);

// // inserAtHead(head,55);

// display(head);

// cout<<"After deleting Head the list is:"<<endl;
// // deleteAtHead(head);
// deleteNode(head,33);
// display(head);
// cout<<head->data;

ListNode* l1 = NULL;
inserAtHead(l1,1);
inserAtHead(l1,2);
inserAtHead(l1,3);
inserAtHead(l1,3);
inserAtHead(l1,3);
inserAtHead(l1,3);
ListNode* l2 = NULL;
inserAtHead(l2,3);
inserAtHead(l2,4);
inserAtHead(l2,5);

display(l1);
cout<<"\n";
display(l2);
cout<<"\n";
cout<<LengthLinkedList(l1)<<" and "<<LengthLinkedList(l2);
cout<<endl;
DoSameList(l1,l2);
display(l1);
cout<<endl;
display(l2);
    return 0;
}
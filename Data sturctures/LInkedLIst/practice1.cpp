#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void create(int arr[], Node * head, int n){
    Node* first = new Node(arr[0]);
    Node* temp,*last;
   
    
    last = first;

    
    for(int i = 1;i<n;i++){
        temp  = new Node(arr[i]);
     
      last->next = temp;
      temp = last;
       
    }
}


void display(Node* head){
Node * temp = head;
while (temp != NULL)
{
   cout<<temp->data<<" ";
   temp = temp->next;
}

 
}

int main(){
int arr[] = {1,2,3,46,57,34,3};
Node * head = NULL;
// create(arr,head,7);
display(head);

    return 0;
}
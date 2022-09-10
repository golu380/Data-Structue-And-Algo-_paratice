#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val){
        data = val;
        next = prev = NULL;
    }
} ;

Node*  create(int a[], int n)
{
    Node *t, *last;
    int i;
    Node* first = new Node(a[0]);
    // first->data = a[0];
    // first->prev = first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node(a[i]);
        // t->data = a[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
    return first;
}

void display(Node *p)
{
    while (p)
    {
        cout << p->data << ' ';
        p = p->next;
    }
    cout << endl;
    // while(p){
    //     cout<<p->data<<' ';
    //     p = p->next;
    // }
}
int length(Node *p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}
void reverse(Node* &first){
    Node* p = first;
     Node* temp ;
    
    while(p){
       temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;
        if(p!= NULL && p->next == NULL){
            first = p;
        }
    }
    
    

}
void insertdllAtHead(Node* &head,int x){
    Node* newNode = new Node(x);
if(head == NULL){
head = newNode;
}else{
    newNode->prev = NULL;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    
}
}
void insertAtGivenPos(Node* &head,int x,int pos){
   
    if(pos < 1 || pos > length(head))
        return;
    if(pos == 1){
        insertdllAtHead(head,x);
        return;
    }else{
         Node* newNode = new Node(x);
        Node* temp = head;
        for(int i = 1;i < pos-1;i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        if(temp->next != NULL){
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
    
}
void deleteNode(Node*& head, int pos){
    if(pos < 1 || pos > length(head)){
        cout<<"Invalid Position"<<endl;
        return;
    }
    if(pos == 1){
        Node * temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;

    }else{
        Node* temp = head;
        for(int i = 1;i < pos-1;i++){
            temp = temp->next;
        }
        Node* del = temp->next;
        temp->next = del->next;
        if(del->next != NULL){
            del->next->prev = temp;
        }
        delete del;
    }
    
}

int main()
{   
    
    int arr[] = {10, 20, 30, 40, 50};
    // cout << length(t) << endl;
    Node* t = create(arr, 5);
    display(t);
    cout << length(t) << endl;
    
    insertdllAtHead(t,100);
    display(t);
    cout << length(t) << endl;
    insertAtGivenPos(t,200,3);
    display(t);
    reverse(t);
    display(t);
    cout << length(t) << endl;
    deleteNode(t,3);
    display(t);
    cout << length(t) << endl;
    return 0;
}
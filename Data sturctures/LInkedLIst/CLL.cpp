#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void push(Node *&head, int data)
{
    Node *new_node = new Node(data);
    Node *temp = head;
    new_node->next = head;
    if (head != NULL)
    {
        while (temp->next != head)
            temp = temp->next;
        temp->next = new_node;
    }else
    new_node->next = new_node;

    head = new_node;
}
void printList(Node *head)
{
	Node *temp = head;
	if (head != NULL)
	{
		do
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		while (temp != head);
	}
}
void recdisplay(Node * head)  {
    Node *temp = head;
      int flag = 0;
   
     if(temp != head || flag == 0)
    {  
        flag = 1;
        cout<<temp->data<<" ";
         
         recdisplay(temp->next);
        
    }
    // cout << head->data << " ";
    // recdisplay(head->next);
    flag =0;
   
}
void deleteNode(Node* &head,int val){
Node* temp = head;
Node* todelete;
while(temp->next->data != val){
temp = temp->next;
}
todelete = temp->next;
temp->next = todelete->next;
 delete todelete;
 

}
int main()
{
    Node* head = NULL;
    push(head,34);
    push(head,3);
    push(head,4);
    push(head,134);
   printList(head);
   cout<<endl;
recdisplay(head);


    return 0;
}
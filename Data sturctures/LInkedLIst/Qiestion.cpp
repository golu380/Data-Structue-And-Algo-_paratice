#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public:
    int data;
    ListNode* next;
    ListNode(int val){
        data = val;
        next = NULL;
    }
};


int LengthofList(ListNode* head){
    ListNode* temp = head;
    int len = 0;
    while (temp != NULL)
    {
    temp = temp->next;
       len++;
    }
    return len;
    
}
void deleteAtHead(ListNode * &head){
    if(head == NULL){
        // cout<<"Linked List has no any elements to be deleted"<<endl;
        printf("List has no any elements");
    }
    ListNode* temp = head;
    head = head->next;
    delete temp;
}
ListNode* RemoveFromheLastNode(ListNode* head,int n){
int size = LengthofList(head);
if(n == size){
    deleteAtHead(head);
}else{
int ind = size - n-1;
int i = 0;
ListNode* temp = head;
while (i != ind)
{
    i++;
   temp = temp->next;
   

}
ListNode* todelete = temp->next;
temp->next = todelete->next;
delete todelete;
}


return head;
}
void addAtTail(ListNode* & head,int val){
    ListNode* new_node = new ListNode(val);
     ListNode* temp = head;
    if(head == NULL){
         head = new_node;
         return ;
    }
  
    while(temp->next != NULL){
       temp = temp->next;

    }
    temp->next = new_node;
   

}


ListNode* AddTwoLinkedList(ListNode* l1,ListNode* l2){
    int carry = 0;
ListNode* ans = NULL;
ListNode* temp1 = l1;
ListNode* temp2 = l2;
    
while(temp1 != NULL && temp2 != NULL){
    int sum = carry + temp1->data + temp2->data;
    if(sum >= 10){
    int digit = sum % 10;
    addAtTail(ans,digit);
    }else{
        int digit = sum ;
    addAtTail(ans,digit);
    }
  
    carry = sum / 10;
    temp1 = temp1->next;
    temp2 = temp2->next;

}

while (temp1 != NULL)
{
   int sum = carry + temp1->data;
   int digit = sum % 10;
   addAtTail(ans,digit);
   carry = sum / 10;
   temp1=temp1->next;
}
while (temp2 != NULL)
{
   int sum = carry + temp2->data;
   int digit = sum % 10;
   addAtTail(ans,digit);
   carry = sum / 10;
   temp2=temp2->next;
}
while (carry != 0)
{
    addAtTail(ans,carry);
    carry = carry/10;

}


return ans;
  
}

//swaping the nodes k from the endk and k from the first


ListNode* SwapingNode(ListNode* head,int k){
int size = LengthofList(head);
ListNode* lastNode = head;
ListNode* firstNode = head;
int ind = size - k;
int i = 0;
int j = 1;
while (i != ind)
{i++;
    lastNode= lastNode->next;
  
}
while (j != k)
{
    j++;
    firstNode = firstNode->next;
}

swap(firstNode->data,lastNode->data);

return head;


}
ListNode * mergeTwoSortedList(ListNode* l1,ListNode* l2){
    if(l1 == NULL)
        return l2;
    if(l2 == NULL)
        return l1;
    ListNode* head = NULL;
    if(l1->data <= l2->data){
        head = l1;
        head->next = mergeTwoSortedList(l1->next,l2);
    }else{
        head = l2;
        head->next = mergeTwoSortedList(l1,l2->next);
    }
    return head;
}
// ListNode* mergeTwoSortedList(ListNode* &temp1,ListNode* &temp2){
//     ListNode* ans = NULL;
//     // ListNode* temp1 = l1;
//     // ListNode* temp2 = l2;
//     while (temp1 != NULL && temp2 != NULL)
//     {
//         if(temp1->data < temp2->data){
//             addAtTail(ans,temp1->data);
//             temp1 = temp1->next;
//         }else if(temp1->data == temp2->data){
//             addAtTail(ans,temp1->data);
//             addAtTail(ans,temp2->data);
//             temp1 = temp1->next;
//             temp2 = temp2->next;
//         }else{
//             addAtTail(ans,temp2->data);
//             temp2 = temp2->next;
//         }


//     }
//     while (temp1 != NULL)
//     {
//         addAtTail(ans,temp1->data);
//         temp1 = temp1->next;
//     }
//     while (temp2 != NULL)
//     {
//         addAtTail(ans,temp2->data);
//         temp2 = temp2->next;
//     }
    
//     return ans;
    
// }
void swap(int*str1, int* str2)
{
  int* temp = str1;
  str1 = str2;
  str2 = temp;
} 

ListNode* pairWiseSwaping(ListNode* head){
    ListNode* temp = head;
    while (temp != NULL && temp->next != NULL )
    {
        swap(temp->data,temp->next->data);
        temp = temp->next->next;
    }
    return head;
}

void display(ListNode *head){
    ListNode* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
//  ListNode* mergeKLists(vector<ListNode*>& arr) {
//      int last = arr.size();
//      while (last != 0) {
//         int i = 0, j = last;

//         while (i < j) {
        
//             arr[i] = mergeTwoSortedList(arr[i], arr[j]);
 
//             i++, j--;
 
//             if (i >= j)
//                 last = j;
//         }
//     }
 
//     return arr[0];
//     }
 ListNode* mergeKLists(vector<ListNode*>& lists) {
  if(lists.size() == 0){
      return NULL;
  }if(lists.size() == 1){
      return lists[0];
  }
        ListNode * res = lists[0];
        for(int i = 1;i< lists.size();i++){
            res = mergeTwoSortedList(res,lists[i]);
        }
 
    return res;
    }


ListNode* mergeList(ListNode * p, ListNode* q){
  ListNode* third ,*last;

 if(p ->data < q->data){
    last = third = p;
    p = p->next;
    third->next = NULL;
 }else{
    third = last = q;
    q = q->next;
    third->next = NULL;
 }
 while(p && q){
    if(p->data < q->data){
        last->next = p;
        last = p;
        p = p->next;
        last->next = NULL;
    }else{
        last->next = q;
        last = q;
        q = q->next ;
        last->next = NULL;
    }
 }

 if(p) last ->next = p;
 if(q) last ->next = q;

 return third;
}

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *current = head, *prev = NULL, *next = NULL, *tempcurr, *tempprev;
        
        // reverse k nodes
        int count = 0;
        while(current != NULL && count < k) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
            count++;
        }
        
        // when k > the count of the remaining nodes 
        // then don't reverse the remaining nodes
        // but the above loop has already reversed it
        // so we will reverse that part again to
        // retain its original order
        if(k > count) {
            tempcurr = prev;
            tempprev = NULL;
            
            while(tempcurr != NULL) {
                next = tempcurr->next;
                tempcurr->next = tempprev;
                tempprev = tempcurr;
                tempcurr = next;
            }
            
            // tempprev is the head here
            return tempprev;
        }
        
        if(current != NULL) {
            head->next = reverseKGroup(current, k);
        }
        
        return prev;
    }


// Time complexity: O(N)
// Space complexity: O(1)

        

int findmergePont(ListNode *h1, ListNode*h2){
    int l1 = 0, l2 = 0, diff = 0;
    ListNode* temp1 = h1, *temp2 = h2;
    while(temp1 != NULL){
        l1++;
        temp1 = temp1->next;
    }
    while(temp2 != NULL){
        l2++;
        temp2 = temp2->next;
    }
    diff = abs(l1 - l2);
    if(l1<l2){
        temp1 = h2;
        temp2 = h1;
        
    }else{
        temp1 = h1;
        temp2 = h2;
    }
    for(int i = 0; i<diff;i++){
        temp1 = temp1->next;
    }
    while(temp1 != NULL && temp2 != NULL){
        if(temp1 == temp2){
            return temp1->data;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
}
int main(){

ListNode * firstlist = NULL;
ListNode* seclist = NULL;
addAtTail(firstlist,23);
addAtTail(firstlist,34);
addAtTail(firstlist,45);
addAtTail(firstlist,67);
addAtTail(firstlist,90);
addAtTail(firstlist,110);
addAtTail(firstlist,130);
// display(firstlist);

addAtTail(seclist,11);
addAtTail(seclist,22);
addAtTail(seclist,56);
addAtTail(seclist,110);
addAtTail(seclist,80);
addAtTail(seclist,89);
ListNode* ans = mergeList(firstlist,seclist);
// display(seclist);
display(firstlist);
cout<< findmergePont(firstlist,seclist)<<endl;
display(ans);
ListNode* ans1 = reverseKGroup(firstlist,2);
display(firstlist);
cout<<"the reversed list is "<<endl;
display(ans1);

    return 0;
}
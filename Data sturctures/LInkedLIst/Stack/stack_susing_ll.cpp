#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // Node(int val){
    //     data = val;
    //     next = NULL;
    // }
};
class Stack{
    private:
    Node* top;
public:
Stack(){top = NULL;}
void push(int x);
int pop();
void display();

};
void Stack :: push(int x){
    Node* t = new Node;
    if(t == NULL){
        cout<<"Stack is full";
    }else{
        t->data = x;
        t->next = top;
        top = t;
    }
}
int Stack:: pop(){
    int x = -1;
    if(top == NULL){
        cout<<"Stack is empty";
    }else{
        x = top->data;
        Node* t = top;
        top = top->next;
        free(t);
    }
    return x;
}

void Stack:: display(){
    Node* t = top;
    while(t != NULL){
        cout<<t->data<<" ";
        t = t->next;
    }
    cout<<endl;
}
int main()
{
Stack st;
st.push(34);
st.push(31);
st.push(35);
st.push(36);
st.push(39);
st.display();
cout<<st.pop()<<endl;
cout<<st.pop()<<endl;
cout<<st.pop()<<endl;
cout<<st.pop()<<endl;

    return 0;
}
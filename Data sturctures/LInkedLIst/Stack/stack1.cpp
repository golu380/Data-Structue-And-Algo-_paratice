#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    int * s;
    Stack(int val){
        size = val;
        top = -1;
        s = new int[size];
    }
};
void push(Stack * st, int x){
    if(st->top == st->size-1){
        cout<<"Stack overfolw";
    }else{
        (st->top)++;
        st->s[st->top] = x;
    }
}
int pop(Stack *st){
    int x = -1;
    if(st->top == -1){
        cout<<"Stack is empty";
    }else{
        x = st->s[(st->top)--];
    }
    return x;
}
void display(Stack* st){
    int i ;
    for(i = st->top;i>= 0;i--)
    {
            cout<<st->s[i]<<" ";
    }
    cout<<endl;
}
int main(){
Stack st(5);
push(&st,23);
push(&st,24);
push(&st,21);
push(&st,20);
push(&st,29);

display(&st);

cout<<pop(&st);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Queue
{
    public:
    int size;
    int front;
    int rear;
    int * Q;
};
void create(Queue * q,int size){
    q->size = size;
    q->front = q->rear = -1;
    q->Q = new int[q->size];
}
void enqueue(Queue * q,int x){
    if(q->rear == q->size-1)
    cout<<"Queue is full";
    else{
        q->rear++;
        q->Q[q->rear] = x;
    }
}

int dequeue(Queue * q){
    int x = -1;
    if(q->front == q->rear){
        cout<<"Queue is Empty"<<endl;
    }else{
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}
void Display(Queue  q){
    int i ;
    for(int i = q.front+1;i<=q.rear;i++){
        cout<<q.Q[i]<<" ";
    }
    cout<<endl;
}
int main(){

Queue q;
create(&q,5);
enqueue(&q,22);
enqueue(&q,29);
enqueue(&q,20);
enqueue(&q,24);

cout<<dequeue(&q)<<endl;

Display(q);
    return 0;
}
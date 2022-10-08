#include<bits/stdc++.h>
using namespace std;
class Queue{
    public:
    int size;
    int front;
    int rear;
    int *Q;
};
void create(Queue *q, int size){
    q->size = size;
    q->front = q->rear = 0;
    q->Q = new int[q->size];
}
void enqueue(Queue * q,int x){
if((q->rear + 1)%q->size == q->front){
    cout<<"Queue is Full"<<endl;
}else{
    q->rear = (q->rear+1)%q->size;
    q->Q[q->rear] = x;
}
}
void dequeue(Queue * q){
   int x = -1;
   if(q->front == q->rear) {
    cout<<"Queue is Empty"<<endl;
   }else{
    
   }
}

int main(){


    return 0;
}
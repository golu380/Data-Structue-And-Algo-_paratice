#include <bits/stdc++.h>
using namespace std;
#define MAXSIZE 10
class ArrayStack
{
public:
    int top;
    int capacity;
    int *array;
};

ArrayStack *CreateStack()
{
    ArrayStack *S = new ArrayStack();
    if (!S)
        return NULL;

    S->capacity = MAXSIZE;
    S->top = -1;
    S->array = new int[S->capacity];
    if (!S->array)
        return NULL;
    return S;
}
int IsEmptyStack(ArrayStack * S){
    return (S->top == -1);
}
int IsFullStack(ArrayStack *S,int data){

}
int main()
{

    return 0;
}
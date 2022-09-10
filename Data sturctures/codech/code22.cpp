#include<bits/stdc++.h>
#include<queue>
using namespace std;
void showpq(priority_queue<int> gq){
    priority_queue<int> g = gq;
    while (!g.empty())
    {
       cout<<"\t"<<g.top();
       g.pop();
    }
    cout<<endl;
    
}

int main(){
priority_queue<int> gquiz;
priority_queue<int> gquiz1;
 gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(60);
    gquiz.push(25);
    gquiz.push(37);
    gquiz.push(13);
    gquiz.push(98);
    showpq(gquiz);
    gquiz.swap(gquiz1);
    showpq(gquiz1);
    // showpq(gquiz);
    return 0;
}
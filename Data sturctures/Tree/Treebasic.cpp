#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
    Node* left,*right;
    int data;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

void printInorder(Node * node){
    if(node == NULL)
    return;
    printInorder(node->left);
    cout<<node->data<<" ";
    printInorder(node->right);
}
int main(){
Node * root = new Node(45);
root->left = new Node(23);
root->right = new Node(78);
printInorder(root);

return 0;
}
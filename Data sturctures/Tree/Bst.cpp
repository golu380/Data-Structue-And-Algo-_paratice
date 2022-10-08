#include<iostream>
using namespace std ;
class Bst{
    
    Bst* right, *left;
    int data;
    public:
    Bst():data(0),left(NULL),right(NULL){}
    Bst(int val){
        data = val;
        right = left = NULL;

    }
Bst* searching(Bst* root,int key);
Bst*  insert(Bst * root,int val);
void printInoder(Bst* root);
void printNode(Bst* node);
};
void Bst::printNode(Bst*node){
    cout<<node->data;
}
void Bst::printInoder(Bst* root){
if(!root){
    return;
}else{
    printInoder(root->left);
    cout<<root->data<<" ";
    printInoder(root->right);


}
}
Bst* Bst::insert(Bst* root,int val){
if(!root){
    root = new Bst(val);
}
if(val>root->data){
    root->right = insert(root->right,val);

}
if(val<root->data){
    root->left = insert(root->left,val);
}
return root;
}
Bst * Bst::searching(Bst* root,int key){
if(root == NULL || root->data == key){
    return root;
}
else if(key > root->data){
    return searching(root->right,key);
}else{
    return searching(root->left,key);
}
}
int main(){
Bst b, *root = NULL;

root = b.insert(root,50);
b.insert(root,30);
b.insert(root,20);
b.insert(root,20);
b.insert(root,40);
b.insert(root,70);
b.insert(root,60);
b.insert(root,80);
b.printInoder(root);
Bst* searchNode = b.searching(root,70);
if(!searchNode){
    cout<<"element is not found";
}else{
    cout<<"the element is founded id:";
    b.printNode(searchNode);
}
    return 0;
}
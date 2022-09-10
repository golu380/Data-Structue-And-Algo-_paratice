#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *right, *left;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
vector<int> Post(Node *root)
{
    stack<Node *> st;
    vector<int> ans;
    do
    {
        while (root)
        {
            if (root->right)
                st.push(root->right);
            st.push(root);
            root = root->left;
        }
        root = st.top();
        st.pop();

        if (root->right && st.top() == root->right)
        {
            st.pop();
            st.push(root);
            root = root->right;
        }
        else
        {
            ans.push_back(root->data);
            root = NULL;
        }

    } while (!st.empty());
    return ans;
}
vector<int> preo(Node *root)
{
    vector<int> ans;
    stack<Node *> st;

    while (1)
    {
        while (root)
        {
            ans.push_back(root->data);
            st.push(root);
            root = root->left;
        }
        if (st.empty())
            break;
        else
        {
            root = st.top();
            st.pop();
        }
        root = root->right;
    }
    return ans;
}
vector<int> InorderTraversal(Node *root)
{
    stack<Node *> s;
    Node *curr = root;
    vector<int> ans;
    while (curr != NULL || s.empty() == false)
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        ans.push_back(curr->data);
        curr = curr->right;
    }
    return ans;
}
int findMaxmm(Node *root)
{
    int root_val, right, left, max = INT_MIN;
    if (root != NULL)
    {
        root_val = root->data;
        left = findMaxmm(root->left);
        right = findMaxmm(root->right);
        if (left > right)
            max = left;
        max = right;

        if (root_val > max)
        {
            max = root->data;
        }
    }
    return max;
}

vector<int> preored(Node *root)
{

    stack<Node *> st;
    vector<int> ans;
    while (1)
    {
        while (root)
        {
            ans.push_back(root->data);
            st.push(root);
            root = root->left;
        }
        if (st.empty())
        {
            break;
        }
        else
        {
            root = st.top();
            st.pop();
        }
        root = root->right;
    }
}
vector<int> preOrder(Node *root)
{
    Node *curr = root;
    stack<Node *> st;
    vector<int> ans;
    while (!st.empty() || curr != NULL)
    {
        while (curr != NULL)
        {
            ans.push_back(curr->data);
            if (curr->right)
                st.push(curr->right);
            curr = curr->left;
        }
        if (st.empty() == false)
        {
            curr = st.top();
            st.pop();
        }
    }
    return ans;
}
// Itrative approach of finding maxm in tree
int ffindItraMax(Node *root)
{int max = INT_MIN;
queue<Node*> qu;
Node* temp;
    if(root == NULL)
    return -1;
  else{
     qu.push(root);
     while(qu.empty()  != true){
         temp = qu.front();
         qu.pop();

         if(temp->data > max){
             max = temp->data;
         }
         if(temp->left){
             qu.push(temp->left);
         }
         if(temp->right){
             qu.push(temp->right);
         }
     }
  }
    
    return max;
}

//serching an element in Binary tree
int SeachingBT(Node* root,int data){
if(root == NULL){
    return 0;
}else{
   int temp;
    if(root->data == data){
        return 1;
    }else{
        temp = SeachingBT(root->left,data);
        if(temp != 0){
            return 1;
        }else
        return SeachingBT(root->right,data);
    }
}
return 0;
}
//Iteratinve approach 
int search(Node* root,int val){
    Node* temp;
    queue<Node*> qu;
    if(root == NULL){
        return 0;
    }else{
      qu.push(root) ;
      while(qu.empty() != true) {
          temp = qu.front();
          qu.pop();
          if(temp->data == val){
              return 1;
          }else{
              if(temp->left){
                  qu.push(temp->left);
              }
              if(temp->right){
                  qu.push(temp->right);
              }
          }
      }
    }
    return 0;
}

void insertBinaryTree(Node* root,int val){
Node* temp;
queue<Node*> qu;
Node* new_Node = new Node(val);
if(!root){
    root = new_Node;
    return;
}else{
    qu.push(root);
    while (qu.empty() != true)
    {
        temp = qu.front();
        qu.pop();
        if(root->left){
            qu.push(root->left);
        }else{
            temp->left = new_Node;
            return;
        }
        if(temp->right){
            qu.push(temp->right);
        }else{
            temp->right = new_Node;
            return;
        }
    }
    
}


}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
insertBinaryTree(root,45);
    vector<int> ans = InorderTraversal(root);
    vector<int> answer = preOrder(root);
    vector<int> answer1 = preo(root);
    // vector<int> answer2 = preored(root);
    // vector<int> answer3 = Post(root);
    
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < answer.size(); i++)
    {
        cout << answer[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < answer1.size(); i++)
    {
        cout << answer1[i] << " ";
    }
    // cout << endl;
    // for (int i = 0; i < answer2.size(); i++)
    // {
    //     cout << answer1[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < answer3.size(); i++)
    // {
    //     cout << answer3[i] << " ";
    // }
    int max = findMaxmm(root);
    cout << endl;
    cout << max << endl;
    int max1 = ffindItraMax(root);
    cout << endl;
    cout << max1 << endl;
    cout<<SeachingBT(root,7)<<endl;
    cout<<search(root,7)<<endl;

    return 0;
}
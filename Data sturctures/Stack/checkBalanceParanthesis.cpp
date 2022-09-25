#include<bits/stdc++.h>
using namespace std;

bool arebracketbalanced(string expr){
    //Declare a stack to hold the previous brackents
    stack<char> temp;
    for(int i = 0;i<expr.length();i++){
        if(temp.empty()){
            temp.push(expr[i]);
        }else if((temp.top() == '(' && expr[i] == ')') || (temp.top() == '{' && expr[i] == '}')||(temp.top() == '[' && expr[i] == ']')){
            temp.pop();
        }else{
            temp.push(expr[i]);
        }
        
    }
    if(temp.empty()){
        return true;

    }else{
        return false;
    }

}
int main(){
    string expr = "{()}[]";
 
    // Function call
    if (arebracketbalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}
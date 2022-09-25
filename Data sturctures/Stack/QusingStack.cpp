#include<bits/stdc++.h>
using namespace std;
int prec(char c){
    if(c == '^')
    return 3;
    else if(c == '/' || c =='*')
    return 2;
    else if(c == '+'|| c=='-')
    return 1;
    else
    return -1;
}
void posfixEvalueation(string s){
    for(int i = 0;i<s.length();i++){
        if(s[i] == ' ')
        continue;
        else if(isdigit(s[i])){
            int num = 0;
            while(is)
        }
    }
}
void infixToPostfix(string s){
    stack<char> st;
    string result;
    for(int i = 0;i<s.length();i++){
    char c = s[i];

    //if the scanned character is an operand,add it to output
    //string
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c<='Z') || (c >='0' && c<='9'))
    result += c;
    
    //if the scanned character is an "(" push it to the stack
    else if(c == '(')
    st.push('(');
    // if the scanned character is an ')', pop and to output
    //string from the stack until '(' is encounter.
    
    else if(c == ')'){
        while(st.top() != '('){
            result += st.top();
            st.pop();
        }
        st.pop();
    }
    // if an operator scanned pop all the operator from the stack 
    //which are greate than or equal to in precedence than that
    //of the scanned operator to the stack.(if you encouter parenthesis
    //while poping then stop there and push scanned operator in stack)
    else{
        while(!st.empty() && prec(s[i]) <= prec(st.top())){
            if(c =='^' && st.top() != '^')
            break;
            else{
                result += st.top();
                st.pop();
            }
        }
        st.push(c);
    }
}
// pop all the remaining elements from the stack
while(!st.empty()){
    result += st.top();
    st.pop();
}
cout<<result<<endl;
}
int main(){
string exp = "a+b*(c^d-e)^(f+g*h)-i";
infixToPostfix(exp);
    return 0;
}
// covert infix into postfix
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int precedence(char c){
    if(c=='+' || c=='-')return 1;
    if(c=='*' || c=='/')return 2;
    return 0;
}
string infixtopostfix(string s){
    stack<char> st;
    string result;
    for(int i=0;i<s.length();i++){
        char c = s[i];
        if((c>='a' && c<='z')||(c>='A' && c<='Z' )){
            result += c;
        }
        else if(c=='('){
            st.push(c);
        }
        else if(c==')'){
            while(!st.empty() && st.top()!='('){
                result += st.top();
                st.pop();
            }
            if(!st.empty())st.pop();
        }
        else{
            while(!st.empty() && precedence(st.top())>=precedence(c)){
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()){
        result += st.top();
        st.pop();
    }
    return result;
}
int main(){
    string infix = "a+b*(c-d)";
    string postfix = infixtopostfix(infix);
    cout<<"Postfix expression: "<<postfix<<endl;
    return 0;
}
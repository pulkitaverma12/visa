// stack using array
#include<iostream>
#include<stack>
using namespace std;
class mystack{
    public:
    int top,cap;
    int *arr;
    mystack(int c){
        cap = c;   // capacity
        top = -1;  // top of stack
        arr = new int[cap]; // dynamic array
    }
};
int isfull(mystack *s){
    return (s->top == s->cap-1);
}
int isempty(mystack *s){
    return (s->top == -1);
}
int push(mystack *s,int x){
    if(isfull(s)){
        cout<<"stack overflow"<<endl;
        return -1;
    }
    s->arr[++s->top] = x;
}
int pop(mystack *s){
    if(isempty(s)){
        cout<<"stack underflow"<<endl;
        return -1;
    }
    return s->arr[s->top--];
}
int main(){
    mystack s(5);
    push(&s,10);
    push(&s,20);
    push(&s,30);
    cout<<"Stack elements:"<<endl;
    while(!isempty(&s)){
        cout<<pop(&s)<<" ";
    }
    return 0;
}
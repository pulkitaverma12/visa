// stack with linklist
#include<iostream>
#include<stack>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data = data;
        next = nullptr;
    }
};
class mystack{
    public:
    node* top;
    mystack(){
        top = NULL;
    }
};
int isempty(mystack *s){
    return (s->top == nullptr);
}
void push(mystack *s,int x){
    node* n = new node(x);
    n->next = s->top;
    s ->top = n;
}
int pop(mystack *s ){
    if(isempty(s)){
        cout<<"stack underflow"<<endl;
        return -1;
    }
    int x = s->top->data;
    node* temp = s->top;
    s->top = s->top->next;
    delete temp;
    return x;
}
int main(){
    mystack s;
    push(&s,10);
    push(&s,20);
    push(&s,30);
    cout<<"Stack elements:"<<endl;
    while(!isempty(&s)){
        cout<<pop(&s)<<" ";
    }
    return 0;
}
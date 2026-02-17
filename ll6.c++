// #insertion at head
#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};
void insert(node* &head,int d)
{
    node* n = new node(d);
    n->next = head;
    head = n;
}
void print(node* head)
{
    node* temp = head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
void back(node* &head,int d)
{
    node*temp = head;
    node* n1 = new node(d);
    if(head == NULL){
        head = n1;
        return;
    }
    while(temp->next!=nullptr)
    {
        temp = temp->next;
    }
    temp->next = n1;
}
int main()
{
    node *head1 = nullptr;
    node *head2 = nullptr;
    insert(head1,1);
    insert(head1,2);
    insert(head1,3);
    insert(head1,4);
    insert(head1,5);
    print(head1);
    back(head2,1);
    back(head2,2);
    back(head2,3);
    back(head2,4);
    back(head2,5);
    print(head2);
    return 0;

}
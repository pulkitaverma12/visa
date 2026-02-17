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
int main()
{
    node* n1 = new node(30);
    node *head = n1;
    cout<<n1->data<<endl;
    cout<<n1->next<<endl;
    cout<<head->data<<endl;
    cout<<head->next->data<<endl;
}
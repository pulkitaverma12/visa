// 4 node linked list and delete the 3rd node
#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int main(){
    node* head = new node;
    head->data = 10;
    head->next = new node;
    head->next->data = 20;
    head->next->next = new node;
    head->next->next->data = 30;
    head->next->next->next = new node;
    head->next->next->next->data = 40;
    head->next->next->next->next = NULL;
    cout << "Original Linked List: ";
    node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    temp = head;
    while(temp->next != NULL && temp->next->data != 30) {
        temp = temp->next;
    }
    if(temp->next != NULL) {
        // Delete the node with value 30 (stores add)
        node* nodeToDelete = temp->next;
        // Bypass the node to delete
        temp->next = temp->next->next;
        free(nodeToDelete);
    }
    cout << "\nUpdated Linked List: ";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}

// Doubly Linked List: Insert a node after a given position
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {

    Node* head = NULL;
    Node* temp = NULL;      
    Node* newNode = NULL;

    int n, value;
    cout << "Enter number of nodes: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "Enter value " << i << ": ";
        cin >> value;

        newNode = new Node;
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = newNode;
        }
        else {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }
    }

    
    int insertValue, position;

    cout << "Enter value to insert: ";
    cin >> insertValue;

    cout << "Enter position after which to insert: ";
    cin >> position;

    Node* insertNode = new Node;
    insertNode->data = insertValue;

    temp = head;

    for(int i = 1; i < position; i++) {
        temp = temp->next;
    }

    insertNode->next = temp->next;
    insertNode->prev = temp;

    if(temp->next != NULL)
        temp->next->prev = insertNode;

    temp->next = insertNode;

   
    cout << "Updated Doubly Linked List: ";
    temp = head;

    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

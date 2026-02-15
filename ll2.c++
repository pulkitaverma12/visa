#include<iostream>
using namespace std;

struct Node {
    int data;
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
        newNode->next = NULL;
        if(head == NULL) {
            head = newNode;
            temp = newNode;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    int insertValue, position;
    cout << "Enter value to insert: ";
    cin >> insertValue;
    cout << "Enter position: ";
    cin >> position;
    Node* insertNode = new Node;
    insertNode->data = insertValue;
    temp = head;
    for(int i = 1; i < position; i++) {
        temp = temp->next;
    }
    insertNode->next = temp->next;
    temp->next = insertNode;
    cout << "Updated Linked List: ";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}


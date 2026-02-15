// create ll and user input and newly created node after the 1st node
#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }
};
int main() {
    int firstValue, newValue;
    cout << "Enter first node value: ";
    cin >> firstValue;
    Node* head = new Node(firstValue);
    cout << "Enter value to insert after first node: ";
    cin >> newValue;
    Node* newNode = new Node(newValue);
    newNode->next = head->next;
    head->next = newNode;
    cout << "Linked List: ";
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}

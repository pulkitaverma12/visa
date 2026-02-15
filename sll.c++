// in a sport lineup,the coach decides to swap the player at the kth position
// from the start with the player at the kth position from the end. How can this be done
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

    int n;
    cout << "Enter number of players: ";
    cin >> n;

    // Create list
    for(int i = 1; i <= n; i++) {
        int value;
        cout << "Enter player ID " << i << ": ";
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

    int k;
    cout << "Enter value of k: ";
    cin >> k;

    int length = 0;
    temp = head;
    while(temp != NULL) {
        length++;
        temp = temp->next;
    }

    if(k > length) {
        cout << "Invalid position";
        return 0;
    }

    Node* first = head;
    for(int i = 1; i < k; i++)
        first = first->next;


    Node* second = head;
    for(int i = 1; i < (length - k + 1); i++)
        second = second->next;

    int tempData = first->data;
    first->data = second->data;
    second->data = tempData;

    cout << "after swap: ";
    temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}

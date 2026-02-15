// a railway reservation system keeps a waitlist of passenger.
// officials need to identify the passengers who
// is the nth person from the end for proirty confirmation.
// how can this person be located effiently.
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

    for(int i = 1; i <= 5; i++) {

        cout << "Enter passenger ID " << i << ": ";
        int id;
        cin >> id;

        newNode = new Node;      
        newNode->data = id;
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

    int n;
    cout << "Enter nth position from end: ";
    cin >> n;

    Node* fast = head;
    Node* slow = head;

    for(int i = 0; i < n; i++) {
        if(fast == NULL) {
            cout << "Position exceeds list length";
            return 0;
        }
        fast = fast->next;
    }

    // Move both pointers together
    while(fast != NULL) {
        fast = fast->next;
        slow = slow->next;
    }
    cout << "Nth person from end is: "<<slow->data;
    return 0;
}

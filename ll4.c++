// a university library keeps a running list of
// issued bookids. when a student requests a book,
// the librarian check weather that id already exist in the issued list
// how can this be verified.
#include<iostream>
using namespace std;

struct Node {
    int bookID;
    Node* next;
};

int main() {

    Node* head = NULL;
    Node* temp = NULL;
    Node* newNode = NULL;

    int n, id;

    // Number of issued books
    cout << "Enter number of issued books: ";
    cin >> n;

    // Insert using for loop
    for(int i = 1; i <= n; i++) {

        cout << "Enter Book ID " << i << ": ";
        cin >> id;

        newNode = new Node;
        newNode->bookID = id;
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

    int searchID;
    cout << "Enter Book ID to check: ";
    cin >> searchID;

    temp = head;
    bool found = false;

    while(temp != NULL) {
        if(temp->bookID == searchID) {
            found = true;
            break;
        }
        temp = temp->next;
    }

    if(found)
        cout << "Book already issued";
    else
        cout << "Book available";
    return 0;
}

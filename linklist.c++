// create linklist o/p is 100 put the data 10,20,30,40,50
// and add the data
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
    // Create linked list: 10 -> 20 -> 30 -> 40 -> 50
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    // head->next->next->next->next = new Node(50);
    // Calculate sum
    int sum = 0;
    Node* temp = head;
    while(temp != NULL) {
        sum += temp->data;
        temp = temp->next;
    }
    cout << "Sum of all elements: " << sum << endl;
    return 0;
}

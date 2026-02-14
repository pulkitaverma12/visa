#include<iostream>
using namespace std;

// Definition for singly-linked list
class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    ListNode* addTwoNumber(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(0);   // dummy node
        ListNode* temp = dummy;              // pointer to build result
        int carry = 0;

        while (l1 || l2 || carry) {

            int sum = carry;

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;
            temp->next = new ListNode(sum % 10);
            temp = temp->next;
        }

        return dummy->next;
    }
};

int main() {

    // Create first linked list: 2 -> 4 -> 3
    ListNode* l1 = new ListNode(2);
    l1->next = new ListNode(4);
    l1->next->next = new ListNode(3);

    // Create second linked list: 5 -> 6 -> 4
    ListNode* l2 = new ListNode(5);
    l2->next = new ListNode(6);
    l2->next->next = new ListNode(4);

    Solution s;
    ListNode* result = s.addTwoNumber(l1, l2);

    // Print result
    while (result) {
        cout << result->val << " ";
        result = result->next;
    }

    return 0;
}

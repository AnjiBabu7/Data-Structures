#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *detectCycle(ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    } else {
        ListNode *temp = head;
        while (temp != NULL) {
            ListNode *cur = head;
            while (cur != temp) {
                if (temp->next == cur) {
                    return cur;
                } else {
                    cur = cur->next;
                }
            }
            temp = temp->next;
        }
    }
    return NULL;
}

int main() {
    ListNode* head = new ListNode(1);
    ListNode* node1 = new ListNode(2);
    ListNode* node2 = new ListNode(3);
    ListNode* node3 = new ListNode(4);
    ListNode* node4 = new ListNode(5);
    ListNode* node5 = new ListNode(6);
    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node1; // Create a cycle

    ListNode *x = detectCycle(head);
    if (x != NULL) {
        cout << x->val;
    } else {
        cout << "No cycle detected";
    }
    return 0;
}

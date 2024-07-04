#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode*next;
    ListNode(int x):val(x),next(NULL){}
};
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* dummy = new ListNode(0);
    dummy->next = head;
    ListNode* first = dummy;
    ListNode* second = dummy;


    for (int i = 0; i <= n; i++) {
        first = first->next;
    }

    
    while (first != NULL) {
        first = first->next;
        second = second->next;
    }

    ListNode* nodeToDelete = second->next;
    second->next = second->next->next;
    delete nodeToDelete;

    ListNode* newHead = dummy->next;
    delete dummy;
    return newHead;
}
int main(){
ListNode* head= new ListNode(1);
ListNode* node1=new ListNode(2);
ListNode* node2=new ListNode(3);
ListNode* node3=new ListNode(4);
ListNode* node4=new ListNode(5);
ListNode* node5=new ListNode(6);
head->next=node1;
node1->next=node2;
node2->next=node3;
node3->next=node4;
node4->next=node5;
ListNode *x=removeNthFromEnd(head,1);
while (head!=NULL)
{
    cout<<head->val<<" ";
    head=head->next;
}

return 0;
}
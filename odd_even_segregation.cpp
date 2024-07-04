#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode*next;
    ListNode(int x):val(x),next(NULL){}
};
 ListNode* oddEvenList(ListNode* head) {
       ListNode *odd=head;
       ListNode *even=head->next;
       ListNode* ev=head->next;

       while((odd->next!=NULL)&&(even->next!=NULL)){
        odd->next=even->next;
        even->next=odd->next->next;
        odd=odd->next;
        even=even->next;
    
       }
       odd->next=ev;
       even->next=NULL;
       return head;
    }

int main(){

return 0;
}
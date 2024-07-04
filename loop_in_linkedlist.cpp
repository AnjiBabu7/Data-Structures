#include<iostream>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
 };
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        ListNode *temp=new ListNode(0);
        while(head!=NULL){
            if(head->next==NULL){
                return false;
            }
            else{
                if(head->next==temp)
                return true;
                else{
                ListNode *cur=head->next;
                head->next=temp;
                head=cur;

            }}
        }
        
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
bool x=hasCycle(head);
cout<<x;
return 0;
}
#include<iostream>
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
   ListNode* middleNode(ListNode* head) {
        if(head==NULL){
            return head;
        }
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int x=(count/2)+1;
        
      for(int i=1;i<x;i++){
        head=head->next;
      }
      return head;
       
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
ListNode* x=middleNode(head);
cout<<x->val;
return 0;
}
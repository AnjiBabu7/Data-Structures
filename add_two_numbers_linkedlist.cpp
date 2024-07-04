#include<iostream>
using namespace std;
struct ListNode {
    int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL||l2==NULL){
            return NULL;
        }
        int j=0,k=0;
        int l=1;
      while(l1!=NULL){
        k=k+(l1->val*l);
        l=l*10;
        l1=l1->next;
      }
      l=1;
      while(l2!=NULL){
        j=j+(l2->val*l);
        l=l*10;
        l2=l2->next;
      }
      int s=j+k;
      ListNode*sum=new ListNode(s%10,NULL);
      ListNode*t=sum;
      s=s/10;
      while(s!=0){
        ListNode*x= new ListNode(s%10,NULL);
        t->next=x;
        t=t->next;
        s=s/10;
      }
      return sum;

    }

int main(){

return 0;
}
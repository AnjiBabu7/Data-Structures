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
       
    }
int main(){
ListNode* l1= new ListNode(1);
ListNode* node1=new ListNode(2);
ListNode* node2=new ListNode(3);
ListNode* node3=new ListNode(4);
ListNode* node4=new ListNode(5);
l1->next=node1;
node1->next=node2;
node2->next=node3;
node3->next=node4;
ListNode *t=l1;
ListNode* l2= new ListNode(1);
ListNode* node5= new ListNode(6);
l2->next=node5;
int k=0,j=0;


while(t!=NULL){
    k=((k*10)+t->val);
    t=t->next;
}
ListNode* y=l2;
while(y!=NULL){
    j=((j*10)+y->val);
    y=y->next;
}
int s=j+k;
ListNode *r=NULL;
while(s!=0){
    int q=s%10;
    ListNode *v= new ListNode(q);
    v->next=r;
    r=v;
    s=s/10;
}
ListNode *ty=r;
while (ty!=NULL)
{
    cout<<ty->val;
    ty=ty->next;
}


return 0;
}
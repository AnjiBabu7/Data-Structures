#include<iostream>
using namespace std;
struct ListNode
{
    int val;
    ListNode*next;
    ListNode(int x):val(x),next(NULL){}
};
ListNode *intersection( ListNode *headA,ListNode *headB){
    ListNode *A=headA;
    ListNode* B=headB;
    int a=0;
    int b=0;
    while(A!=NULL){
        a++;
        A=A->next;
    }
    while (B!=NULL)
    {
       b++;
       B=B->next;
    }
    int k=a-b;
    A=headA;
    B=headB;
    if(k>=0){
        for(int i=0;i<k;i++){
            A=A->next;
        }
    }
    else{
        for(int i=k;i<0;i++){
            B=B->next;
        }
    }
    while ((A!=NULL)&&(B!=NULL))
    {
       if(A==B){
        return A;
       }
       else{
        A=A->next;
        B=B->next;
       }
    }
    return NULL;
    
    
    
}
int main(){

return 0;
}
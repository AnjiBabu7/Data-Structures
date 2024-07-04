#include<iostream>
using namespace std;
struct listnode
{
    int val;
    listnode *next;
    listnode(int x):val(x),next(NULL){}
};
void deletenode(listnode *node){
 if(node->next->next==NULL){
    node->val=node->next->val;
    node->next=NULL;
 }
 else{
    node->val=node->next->val;
    deletenode(node->next);
 }
}
void printlist(listnode *node){
    if(node->next==NULL){
        cout<<node->val<<" ";
    }
    else{
         cout<<node->val<<" ";
         printlist(node->next);
    }
}


int main(){
 struct listnode* head=new listnode(1);
 struct listnode* node1=new listnode(2);
 struct listnode* node2=new listnode(3);
 struct listnode* node3=new listnode(4);
 head->next=node1;
 node1->next=node2;
 node2->next=node3;
 printlist(head);
 deletenode(node2);
 printlist(head);
 
return 0;
}
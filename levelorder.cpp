#include<iostream>
#include<queue>
using namespace std;


struct node{
int val;
struct node* right;
struct node *left;
node(int x) : val(x), right(NULL),left(NULL) {}

};
void levelorder(node * root){
    if(root==NULL)
    return ;
    queue <node *> q;
    q.push(root);
    while(q.empty()==false){
        node *cur=q.front();
        q.pop();
        cout<<cur->val;
         if(cur->left!=NULL)
        q.push(cur->left);
        if(cur->right!=NULL)
        q.push(cur->right);
    }
}
int main(){
node * root=new node(5);
node * node1=new node(4);
node *node2=new node(2);
node *node3=new node(3);
node *node4=new node(1);
node *node5=new node(6);
root->left=node1;
node1->left=node2;
node2->left=node4;
node1->right=node3;
root->right=node5;
levelorder(root);
return 0;
}
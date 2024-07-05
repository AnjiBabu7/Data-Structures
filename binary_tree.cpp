#include<iostream>
using namespace std;
struct node{
int val;
struct node* right;
struct node *left;
node(int x) : val(x), right(NULL),left(NULL) {}

};
void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->val;
        inorder(root->right);
    }
}
void preorder(node *root){
    if(root!=NULL){
        cout<<root->val;
        preorder(root->left);
        
        preorder(root->right);
    }
}
void kthnode(node *root,int k){
if(root==NULL){
    return ;
}
if(k==0){
    cout<<root->val;
}
else{
    kthnode(root->left,k-1);
    kthnode(root->right,k-1);
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
inorder(root);
cout<<endl;
preorder(root);
cout<<endl;
kthnode(root,3);
return 0;
}
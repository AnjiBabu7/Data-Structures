#include<iostream>
struct node
{
    int val;
    node *next=NULL;
    node(int x) : val(x), next(NULL) {}
};

using namespace std;
class stack{
    public:
    node *head;
    stack(int x){
        head=new node(x);
    }
void push(int k){
    node * tem=new node(k);
    tem->next=head;
    head=tem;
}
void top(){
    if(head==NULL){
        cout<<"empty";
    }
    else{
    cout<<head->val<<endl;}
}
void pop(){
    if(head==NULL){

    }
    else{
    node *tem=head;
    head=head->next;
    tem->next=NULL;}
}
};


int main(){
stack first(6);
stack second(1);
first.push(7);
first.push(8);
first.top();
first.pop();
first.top();
first.pop();
first.pop();
first.pop();
first.top();
second.top();
second.pop();
second.pop();
second.top();
return 0;
}
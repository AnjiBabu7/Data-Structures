#include<iostream>
using namespace std;
struct node{
int val;
struct node* next;
node(int x) : val(x), next(NULL) {}

};
class queue{
    node *rear=NULL;
node *front=NULL;
public:

queue(int x){
 node *temp=new node(x);
 rear=temp;
 front=temp;
}
void enqueue(int x) {
        node* temp = new node(x);
        if (rear == nullptr) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty" << endl;
            return;
        }
        node* temp = front;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
    }
bool is_empty(){
    if((front==NULL)&&(rear==NULL)){
        return true;
    }
    return false;
}
void fronti(){
    if(is_empty()){
        cout<<endl<<"queue is empty";
    }
    else{
        cout<<endl<<front->val;
    }
}
};
int main(){
queue q(5);
q.enqueue(5);
q.dequeue();
q.dequeue();
q.enqueue(6);
q.fronti();
return 0;
}
#include<iostream>
using namespace std;
class node{
public:
int data;
node* next;
node(int value){
data = value;
	next = nullptr;
}
};
class Queue{
public:
node* head;
node*tail;
Queue(){
	head = NULL; 
	tail =NULL;
}
void enqueu(int x){
	node*n=new node(x);
	if(head==NULL){
		tail=n;
		head=n;
		return;
	}
	tail->next = n;
	tail=n;
}
void dequeue(){
	if(head==NULL ){
		cout<<"\nQueue IS Empty";
	}
	head=head->next;
}
void show(){
	node*temp=head;
	cout<<"\n[ ";
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<" ]\n";}
void peek(){
	cout<<"\nThe peek Element is "<<head->data<<endl;	
}
};
int main(){
Queue q1;
q1.enqueu(1);
q1.enqueu(2);
q1.peek();
q1.show();
q1.dequeue();
q1.show();
q1.peek();

}
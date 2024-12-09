#include<iostream>
using namespace std;
class Node{
public:
	int data;
	Node *next;
		Node(int x){
			data= x;
			next = NULL;
		}
};
class Stack{
	Node *head;
	public:
		Stack(){
			head=NULL;
			
		}

	void push(int x){
		Node* newnode = new Node(x);
		if(head==NULL){
			head=newnode;
			
			return;
		}
		Node*temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
		temp->next=newnode;
	}
	void pop(){
		if(head==NULL){
			cout<<"\nStack IS Empty";
		}
		Node*temp=head;
		 while(temp->next->next!=NULL){
	   	     temp=temp->next;
	   }
	   temp->next=NULL;
	   
	}
	void show(){
		
		cout<<"\n[ ";
		Node*temp=head;
		while(temp!=NULL){
			cout<<temp->data<<" ";
			temp= temp->next;
		}
		cout<<" ]";
	}
	void peek(){
		Node*temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		cout<<"\nThe peek Element is : "<<temp->data;
	}
};
int main(){
	Stack n1;
	n1.push(1);
	n1.push(2);
	n1.push(3);
	n1.push(4);
	n1.show();
	n1.peek();
	n1.pop();	
	n1.show();
	n1.peek();
	
}

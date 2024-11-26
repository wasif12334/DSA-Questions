#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	Node(int val){
		data=val;
		next=NULL;
	}
};
class Linked_list{
	public:
			Node* head;
		Linked_list(){
			head = NULL;
		}
void append(int val){
	Node* temp = head ;
	Node* newnode = new Node(val);
	if(head==NULL){
		head = newnode;
		return;
	}
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next=newnode;
}
void show(){
	Node* temp = head ;
		while(temp!=NULL){
		cout<<temp->data<<" -> ";
		temp = temp->next;
	}
	cout<<" NULL"<<endl;
}
};

Linked_list Adding_LinkedList(Linked_list l1,Linked_list l2){
	Node* temp1 = l1.head;
	Node* temp2 = l2.head;
	Linked_list result;
	while((temp1!=NULL)&&(temp2!=NULL)){
		
		int sum = temp1->data + temp2->data ;
		result.append(sum);
		temp1 =temp1->next;
		temp2=temp2->next;
		
	}
	return result;
}
int main(){
	Linked_list l1,l2,l3;
	l1.append(1);
	l1.append(2);
	cout<<"\nLinked List No 1 : \n\n";
	l1.show();
	
	l2.append(2);
	l2.append(4);
	l2.append(44);
	cout<<"\nLinked List No 2 : \n\n";
	l2.show();
	l3 = Adding_LinkedList(l1,l2);
	cout<<"\nAdded Linked List  : \n\n";
	l3.show();
	
}
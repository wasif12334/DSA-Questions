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
	cout<<"[";
		while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"]"<<endl;
}
void reverse(){
	Node *p_node,*c_node,*n_node;
	p_node = NULL;
	c_node = n_node = head;
	while(n_node!=NULL){
		n_node = n_node->next;
		c_node->next = p_node;
		p_node = c_node;
		c_node = n_node;
	}
	 head=p_node;
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
	l1.append(3);
	cout<<"\nLinked List No 1 : ";
	l1.reverse();
	l1.show();
	
	l2.append(4);
	l2.append(5);
	l2.append(6);
l2.reverse();
	cout<<"\nLinked List No 2 : ";
	l2.show();
	l3 = Adding_LinkedList(l1,l2);
	cout<<"\nAdded Linked List  : ";
	l3.reverse();
	l3.show();

	
}
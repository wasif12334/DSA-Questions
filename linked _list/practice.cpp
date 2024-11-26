#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node* next;
		
		node(int val){
			data=val;
			next=nullptr;
		}
};
void append(node* &head,int val){
	node* temp = head ;
	node* newnode = new node(val);
	if(head==NULL){
		head = newnode;
		return;
	}
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next=newnode;
}
void show(node* head){
	node* temp = head ;
		while(temp!=NULL){
		cout<<temp->data<<" -> ";
		temp = temp->next;
	}
	cout<<" NULL"<<endl;
}
void pop(node* &head,int val){
	node* temp = head ;
	node* todelete=NULL;
	if(head->data==NULL){
		todelete = head;
        head = head->next;  
        delete todelete;  
        return;
	}
	while(temp->next!=NULL){
		if(temp->next->data==val){
			todelete = temp->next;
			temp->next= temp->next->next;
	delete todelete;
		}
		temp = temp->next;
	}
	
 }
void remove_from_last(node* &head){
 	node* temp=head;
 	if(head==NULL){
 		return ;
	 }
	if(head->next==NULL){
		delete head;
		head =NULL;
		return;
	}
while(temp->next->next!=NULL){
	temp=temp->next;
}
delete temp->next;
temp->next=NULL;
}
void reverse(node*&head){
	node *p_node,*c_node,*n_node;
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
int main(){
	node* head=NULL;
	append(head,7);
	append(head,0);
	append(head,6);
	append(head,4);
	append(head,3);
	append(head,2);
//	append(head,7);
	show(head);
	pop(head,4);
//    show(head);
//    remove_from_last(head);
//    show(head);
    reverse(head);
    show(head);
	
}

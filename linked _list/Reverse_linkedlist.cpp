#include<iostream>
using namespace std;
class node{
	public:
		int data;
		node *next;
		
		node(int val){
			data = val ;
			next = NULL ;
		}
		
};
void insertion(node* &head,int val){
		node *temp = head ;
		node *newnode = new node(val);
		if(head==NULL){
			head=newnode;
			return;
		}
		while(temp->next!=NULL){
			temp=temp->next;
		}

		temp->next = newnode ; 	
}
void display(node* head){
   	node*temp=head;
   	while(temp->next!=NULL){
   		cout<<temp->data<<" -> ";
   		temp= temp->next;
	   }
	   cout<<"NULL"<<endl;
   }
int main(){

     node *head = NULL;
	insertion(head,1);
	insertion(head,2);
	insertion(head,3);
	insertion(head,4);
	display(head);
}
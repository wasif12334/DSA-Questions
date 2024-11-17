#include<iostream>
using namespace std;
class node{
   public:
    string data ;
    node *next;
    node(string value){
      data =value ;
      next =NULL;
    }
};

void Insertion_at_head(node* &head,string val){

	node* newnode = new node(val);
	newnode->next=head;
	head =newnode;
}
void Insertion_At_Tail(node* &head,string val){
    node * newnode = new node(val);
    if(head == NULL){
      head = newnode;
      return ;
   }

 node *temp =head ;
 while(temp->next!=NULL){
  temp = temp -> next ;
 }
  temp -> next = newnode;
}
void display_ll(node* head ){
	int count = 0;
   node * temp = head ;
   while (temp!=NULL){
   cout<< temp->data <<" -> ";
   temp = temp -> next ;
   count ++ ;

   }
   cout<<"NULL"<<endl;
   cout<<"\nTotal nodes in this linkedList are : "<<count<<endl;
}
 int main(){
node *head =NULL;
Insertion_At_Tail(head,"Wasif");
Insertion_At_Tail(head,"Kashif");
Insertion_At_Tail(head,"Shafia");
Insertion_At_Tail(head,"Afzal");
Insertion_At_Tail(head,"Rabia");
Insertion_At_Tail(head,"Kousar");

display_ll(head);
Insertion_at_head(head,"Parveen");
display_ll(head);

}
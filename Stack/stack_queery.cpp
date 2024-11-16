#include<iostream>
using namespace std;
class node{
   public:

    int data ;
    node *next;
    node(int value){
      data =value ;
      next =NULL;
    }
};
void Insertion_At_Tail(node &head,int val){
    node * newnode = new node(val);
    if(head = NULL)
      head = newnode;
      return ;
   }
 node
 node *temp =head ;
 while(temp->next!=NULL){
  temp = temp - > next ;

 }
  temp - > next = newnode;

}
void display_ll(node head ){
   node * temp = heead ;
   while (temp!=NULL){
   cout<< temp->data <<" - >  ";
   temp = temp -> next ;
   }
   cout<<endl;

}
 
int main(){

node *head =NULL;
Insertion_At_Tail(head,1);
Insertion_At_Tail(head,2);
Insertion_At_Tail(head,3);
display_ll(head);

}
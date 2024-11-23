#include<iostream>
#include <cctype>
#include <windows.h>
using namespace std;
//TO cahnge the color of text
void Color(int color){
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

//This is te node of contact
class Contact{
	public:
		string name;
		int phone_number;
		Contact *next;
		Contact(int val){
			name = val;
			next =NULL;
		}
		Contact(string n,int ph){
			name = n;
			phone_number = ph;
			next = NULL;
			}
};
Contact *head = NULL;

//To display All Contacts
void display_contact(Contact*head){
   Contact * temp = head ;
   while (temp!=NULL){
   cout<< "Name : "<<temp->name<<endl ;
   cout<< "Phone Number : "<<temp->phone_number<<endl ;
   temp = temp -> next ;
   }
   cout<<endl;
}
//To serach the specific contact
void search_contact(Contact* &head,string key){
	Contact *temp = head;
	while(temp->next!=NULL){
		if(temp->name==key){
		 cout<< "Name : "<<temp->name<<endl ;
         cout<< "Phone Number : "<<temp->phone_number<<endl ;
   }
		else if(temp->name!=key){
			cout<<"\nContact Not Founded";
		}
		temp=temp->next;
	}
	
}
//Add the new contact to list
void insertion_at_tail(Contact* &head,string name,int phone_num){
	Contact* newcontact = new Contact(name,phone_num);
	if(head==NULL){
		head = newcontact;
		return ;
}
	Contact *temp = head;
	while (temp->next!=NULL){
		temp=temp->next;
		
	}
	temp->next = newcontact;
	cout<<"\nContact sucessfully Added";
}
//Delteting the contact from list
void deltetion_of_contact(Contact* &head,string val){
		Contact *temp = head;
		if(head->name==val){
			head = head->next;
			delete temp;
		}
	while(temp->next!=NULL){
		if(temp->name==val){
	       Contact *todelelte = temp->next;
	       temp->next=temp->next->next;
	       delete todelelte;
   }
		else 
		   {
		   	 cout<<"\nThere is no contact of name : "<<temp->name<<endl;
		   }
		temp=temp->next;
	}
	cout<<"\nThe contact has sucessfully deleted !\n"<<temp->name;
}
//main program
int main(){
	Color(2);
Contact *head=NULL;
Contact *h =head;
int choice,phone_num;
string name,key;
do{
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t ___________________________________________________________________\n";
cout<<"\t\t\t\t\t|\t-------------------------------------------------------     |\n";
cout<<"\t\t\t\t\t|\t\t\t------CONTACT BOOK------\t\t    |\n";
cout<<"\t\t\t\t\t|\t\t\t1-Add Contact\t\t\t\t    |\n";
cout<<"\t\t\t\t\t|\t\t\t2-Dispaly All Contact\t\t\t    |\n";
cout<<"\t\t\t\t\t|\t\t\t3-Search Contact\t\t\t    |\n";
cout<<"\t\t\t\t\t|\t\t\t4-Delete Contact\t\t\t    |\n";
cout<<"\t\t\t\t\t|\t\t\t5-Exit\t\t\t\t\t    |\n";
cout<<"\t\t\t\t\t|___________________________________________________________________|\n";

cout<<"\nEnter your choice: " ;
cin>>choice;

switch(choice){
	case 1:
			cout<<"Enter the Name : ";
			cin>>name;
			cout<<"Enter the Phone number :";
			cin>>phone_num;
			insertion_at_tail(h,name,phone_num);
			sleep(1);
			system("cls");
			break;
	case 2:
		display_contact(h);
		 break;
	case 3:
		cout<<"Enter the name of contact which you want to search :";
		cin>>key;
		search_contact(h,key);
		break;
	case 4:
		cout<<"Enter the name : ";
		cin>>name;
		deltetion_of_contact(h,name);
		break;
	
	default:
		cout<<"\n\nTry again !";
}
}while(choice!=5);
}
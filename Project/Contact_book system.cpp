#include<iostream>
#include <cctype>
using namespace std;
class Contact{
	public:
		string name;
		int phone_number;
	//	int key;
		Contact *next;
		Contact(string k){
			name = k ;
		}
		Contact(string n,int ph){
			name = n;
			phone_number = ph;
			next = NULL;
			}
};
class ContactList{
	public:
		Contact *head ;
		ContactList(){
			head = NULL;
		}
		
Contact *temp = head;
	
void insertion_at_tail(Contact* &head,string name,int phone_num){
	Contact* newcontact = new Contact(name,phone_num);
	if(head==NULL){
		head = newcontact;
		return ;
	
	
	while (temp->next!=NULL){
		temp=temp->next;
		
	}
	temp->next = newcontact;
	cout<<"\nContact sucessfully Added";
}}

void display_contact(Contact*head){
   Contact * temp = head ;
   while (temp!=NULL){
   cout<< "Name : "<<temp->name<<endl ;
   cout<< "Phone Number : "<<temp->phone_number<<endl ;
   
   temp = temp -> next ;


   }
   cout<<endl;
}
void search_contact(string key){
	Contact* temp =head;
	while(temp->next!=NULL){
		if(temp->next->name==key){
		 cout<< "Name : "<<temp->name<<endl ;
         cout<< "Phone Number : "<<temp->phone_number<<endl ;
   }
		else if(temp->next->name!=key){
			cout<<"\nContact Not Founded";
		}
		temp=temp->next;
	}
	
}
};

int main(){
ContactList contact;
Contact*h = contact.head=NULL;
int choice,phone_num;
string name,key;
do{
cout<<"||---------------------------------------------------------------------------------------------------------||\n";
cout<<"\t\t\t\t\t------CONTACT BOOK------\n";
cout<<"1-Add Contact\n";
cout<<"2-Dispaly All Contact\n";
cout<<"3-Search Contact\n";
cout<<"4-Delete Contact\n";
cout<<"5-Exit\n";
cout << "Enter your choice: ";
cin>>choice;
switch(choice){
	case 1:

			cout<<"Enter the Name : ";
			cin>>name;
			cout<<"Enter the Phone number :";
			cin>>phone_num;
			contact.insertion_at_tail(h,name,phone_num);
			sleep(1);
			system("cls");
			break;
	case 2:
		 contact.display_contact(h);
		 break;
	case 3:
		cout<<"Enter the name of contact which you want to search :";
		cin>>key;
		contact.search_contact(key);
		break;
		
	default:
		cout<<"";
}
}while(choice!=5);
}
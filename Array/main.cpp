#include<iostream>
using namespace std;
int main(){
    int marks[]={1,44,55,66,77,12};
  int size =   sizeof(marks)/sizeof(int);
   for(int i=0;i<size;i++){
   	cout<<"Index of Array  is "<<i<<" has value = "<<marks[i]<<endl;
   }
   char user_value;
 cout<<"For Editing  enter E and for delete enter D:"<<endl;
 cin>>user_value;
 if(user_value=='E')
{     
     int value;
     int Edited_value;
	cout<<"For which index you want to edit enter value of that index : ";
	cin>>value;
	cout<<"Enter the value : ";
	cin>>Edited_value;
    marks[value]=Edited_value;
	
}
for(int i=0;i<size;i++){
   	cout<<"Index of Array  is "<<i<<" has value = "<<marks[i]<<endl;
   }
   
}
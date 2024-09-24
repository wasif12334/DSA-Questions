#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"enter the size :";
	cin>>size;
	int array[size];
     cout<<"\nEnter the element of array : ";
	for(int i=0;i<size;	i++	){
	
		cout<<"\nEnter the calue of index "<<i<<" : ";
		cin>>array[i];
	
		
	}
	int uservalue;
	cout<<"enter how many values you want to enter : \n";
	cin>>uservalue;
	int value = uservalue +size;
	for(int i=size ;i<value;i++){
		cout<<"Enter the value at :" <<i<<" : ";
		cin>>array[i];
	}
	for(int i=0;i<value;i++){
		cout<<"Index "<<i<<" : "<<array[i]<<endl;
	}
	cout<<"---------------";
	//Sorting in descending
	for(int i=value;i>=0;i--){
		i--;
		cout<<"Array "<<i<<" : "<<array[i]<<endl;
	}
}
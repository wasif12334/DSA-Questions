#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"\nEnter the size of array : ";
	cin>>size;
	int array[size];
	int* ptr[size];
	cout<<"\nEnter the element of array : ";
	for(int i=0;i<size;	i++	){
	
		cout<<"\nEnter the calue of index "<<i<<" : ";
		cin>>array[i];
		ptr[i]=&array[i];
		
	}
	
	
	cout<<"\nArray :"<<endl;
	for(int i=0;i<size;i++){
		cout<<"Index "<<i<<" : "<<array[i]<<endl;
		cout<<"Address of "<<i<<" : "<<ptr[i]<<endl;
	}
	
}
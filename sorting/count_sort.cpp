#include<iostream>
using namespace std;
void countSORT(int arr[],int size){
	int key=arr[0];
	int count[key+1]={0};
	for(int i=0;i<size;i++){
       key = max(key, arr[i]);
	 }	
	
	for(int i=0;i<size;i++){
		count[arr[i]]++;
	}
	for(int i=1;i<=key;i++){
		count[i]=count[i]+count[i-1];
		
	}
	int arr_b[size]={};
	for(int i=size-1;i>=0;i--){
		      arr_b[--count[arr[i]]] =arr[i];
	}
	for(int i=0;i<size;i++){
		arr[i]=arr_b[i];
}}
int  main(){
    int arr[10]={10,6,5,4,7,4,10,6,5};
    countSORT(arr,10);
    for(int i=0;i<10;i++){
    	cout<<arr[i]<<" ";
	}
}

#include<iostream>
using namespace std;
void insertion_Sorting(int arr[],int size){
	int current_element;
	for(int i=0;i<size;i++){
		current_element=arr[i];
		int j= i-1;
		while(arr[j]>current_element && j>=0){
			arr[j+1]=arr[j];
			j--;
		}	
		arr[j+1]=current_element;
		    
		}
	
}
void print(int arr[],int n){
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
	
}
int main(){
	int array[6]={6,9,3,0,12,5};
 	cout<<"Array before sorting : \n";
	print(array,6);
	cout<<"\nArray after sorting \n";
    insertion_Sorting(array,5);
    print(array,6);
 
}
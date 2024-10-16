#include<iostream>
using namespace std;
int partition(int arr[],int l,int h){
	int pivot = arr[h];
	int i = l-1;
	for(int j=l;j<h;j++){
		if(arr[j]<pivot){
			i++;
			int temp = arr[i] ;
			arr[i] = arr[j];
			arr[j]= temp;
		}
		
	}
	i++;
		int temp = arr[i] ;
		arr[i] = pivot;
		arr[h]= temp;
		return i;
	
}
int QuickSort(int arr[],int l,int h){
	if(l<h){
		int pi = partition(arr,l,h);
		QuickSort(arr,l,pi-1);
		QuickSort(arr,pi+1,h);
		
	}
}
int main(){
	int arr[8]={7,4,2,1,3,7,10,9};
	QuickSort(arr,0,7);
	for(int i =0 ;i<8;i++){
		cout<<arr[i]<<" ";
	}
}
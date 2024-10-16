#include<iostream>
using namespace std;
void swaping(int arr1[],int size_1,int arr2[],int size_2){
	
	int temp =arr1[size_1];
	arr1[size_1]= arr2[size_2];
	arr2 [size_2]= temp;
	
}
void selection_sorting(int arr[],int size){ //sorting function to sort the array in asccending oder
	int min_value;
	for(int i=0;i<size;i++){
		min_value=i;
		for(int j=i+1;j<size;j++){
			if(arr[j]<arr[min_value]){
				swaping(arr,min_value,arr,j);//Caling Swaping function if condition becomes true 
			}
		}

	}
}

void print_Array(int arr[],int size){
	cout<<"{";
	for(int i=0;i<size;i++){
		cout<<" "<<arr[i];
	}	cout<<" }";

	
}
int main(){
	int array[5]={4,2,8,1,100};
	cout<<"Array before sorting : \n";
	print_Array(array,5);
	cout<<"\nArray after sorting \n";
    selection_sorting(array,5);
    print_Array(array,5);
	
}
#include<iostream>
using namespace std;
void insertion_sorting(int arr[],int n){
 for(int i=1;i<n;i++){
     int current =  arr[i] ;
     int perivous_element = i - 1 ;
  while((arr[perivous_element]>current) && (perivous_element>=0)){
     {     arr[perivous_element+1]=arr[perivous_element];
          perivous_element--;
            
        arr[perivous_element] = current ;
  }
    
}}}
void printARRAY(int arr[],int size)
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    // cout<<"Enter the size of array : ";
    // cin>>n;
    n=3;
    
     int arr[3];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
     cout<<"Array before sorting : \n";
     
     printARRAY(arr,n);
     insertion_sorting(arr,n);
     cout<<"\nArray before sorting : \n";
     printARRAY(arr,n);
     
}
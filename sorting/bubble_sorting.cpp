#include<iostream>
using namespace std;
void bubble_sorting(int arr[],int size){
  for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
        if(arr[j]<arr[i])
        {
            int temp =arr[j];
           arr[j]=arr[i];
            arr[i]=temp;
        }
                } 
 
}
}
int main(){
 int array[8]={10,34,2,56,77,67,88,42};
 cout<<"Array Before Sorting : \n";
 cout<<"{ ";
 for(int i=0;i<10;i++){
   cout<<array[i]<<",";
 }
  cout<<" }";

  bubble_sorting(array,8);
 cout<<"Array After Sorting  through bubble sorting: \n";
 cout<<"{ ";
 for(int i=0;i<10;i++){
   cout<<array[i]<<",";
 }
  cout<<" }";

}
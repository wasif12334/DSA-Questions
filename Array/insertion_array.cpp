// Insertion of element at the end of array
#include<iostream>
using namespace std;
int main(){
    int size=6,i;
 int array[6];
 int element;
 cout<<"\nEnter the the 5 array elements : ";
 for( i=0;i<size-1;i++){
    cout<<"\nEnter the element  : ";
    cin>>array[i];
 }
cout<<"\nNow Enter the ement you eant to add :";
cin>>element;
array[i]=element;
for(int i=0;i<size;i++){
cout<<array[i] <<"  ";
 }
}
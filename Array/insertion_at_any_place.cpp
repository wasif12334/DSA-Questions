#include<iostream>
using namespace std;
int main(){
    int size=5,i,index,number;
    int array[5];
    cout<<"Enter the 5 size array elements :";
    for(i=0;i<size;i++){
        cin>>array[i];
    }
    cout<<"\nEnter the index for which you eant to change (1-5)";
    cin>>index;
    cout<<"\nEnter the number ";
    cin>>number;
    array[index]=number;
    cout<<"\nArray after adding :";
    for(i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}
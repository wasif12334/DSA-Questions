#include<iostream>
using namespace std;
int Sum(int arr[],int size){
 for(int i=0;i<size;i++){
    int j =i-1;
    int k = i+1;
    if(arr[i]+arr[j]+arr[k] && k<=size){
        cout<<"( "<<arr[i]<<arr[j]<<arr[k]<<")"<<endl;
    }
 }
}
int main(){
    int arr[] = {-3,-2,-1,5,6,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    Sum(arr,size);
}
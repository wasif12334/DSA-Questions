#include<iostream>
#include <algorithm>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int s=0;
    int e=size;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]=key){
            return mid;
        }
        else if(arr[mid]>size){
            
            s=mid+1;
        }
        else if(arr[mid]>size){
            e=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[5]={1,555,30,22,4};
    
    sort(arr,arr+5);
    int key;
    cin>>key;
    int value=binarysearch(arr,5,key);
    cout<<"Array found at : "<<value;
  

}
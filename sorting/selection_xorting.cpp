#include<iostream>
#include <algorithm>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int low=0;
    int high=size;
 while (low <= high) {
    int mid = (high +low) / 2;

    if (key == arr[mid]){
      return mid;
}
    if (key > arr[mid]){
      low = mid + 1;
}
    else
      high = mid - 1;
  }
    return -1;
}
int main(){
    int arr[5]={1,555,30,22,4};
    
    sort(arr,arr+5);
    int key;
    cin>>key;
    int value=binarysearch(arr,5,key);
    if(value==-1){
    	cout<<"not found "<<endl;
	}
	else if(value!=-1){
    cout<<"Array found at : "<<value;
}

}
#include<iostream>
using namespace std;
int searching(int arr[],int size,int key){
size = size -1;

if(size<0){
return -1;   
}
else if(arr[size]=key)
{
    return 1;
}
else
return    searching(arr,size,key);
}
int main(){
int array[7]={3,41,44,5,7,9,1};
int key =0;
int value;
value = searching(array,7,key);
if(value==1)
{
cout<<"key founded"<<endl;
}
else if(value==-1){
cout<<"not founded !"<<endl;
}
}
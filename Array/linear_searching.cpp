#include<iostream>
using namespace std;
int linear_Seach(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[7]={1,2,5,6,7,9,0};
    int key;
    cout<<"{ ";
    for(int i=0;i<7;i++){
        cout <<" "<<arr[i];
    }
    cout<<" }"<<endl;
    cout<<"\nEnter any number from above array you wiil have to khown it's index :";
    cin>>key;
    cout<<"The index of the "<<key<<" is : "<<linear_Seach(arr,7,key)<<endl;
}

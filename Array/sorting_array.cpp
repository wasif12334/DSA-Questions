#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int array[5]={1,5,3,2,4};
    cout<<"Array before sorting :"<<endl;
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }

    sort(array,array+5);
        cout<<"\nArray After sorting :"<<endl;

     for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
}
#include<iostream>
#include <cstdlib> 
using namespace std;
int main(){
    
   int array[5];
    for(int i=0;i<5;i++){
        array[i]=rand()%100;
        cout<<"\n"<<array[i]<<" ";
    }
     int min=array[0];
    int max=array[0];
    for(int i=0;i<5;i++){
        if(array[i]<min){
            min=array[i];
        }
        else if(array[i]>max){
            max=array[i];
        }
    }
    
    cout<<"\nMin of array is : "<<min;
    cout<<"\nMax of array is : "<<max;

}

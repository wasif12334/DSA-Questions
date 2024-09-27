#include<iostream>
using namespace std;
int main(){
    int n[10];
    cout<<"\nEnter the 10 elements :"<<endl;
    for(int i=0;i<10;i++){
        cin>>n[i];
    }
    cout<<"\nElement\t\t\tValue\t\t\tHistogram"<<endl;
    for(int i=0;i<10;i++){
        cout<<i<<"\t\t\t"<<n[i]<<"\t\t\t";
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
#include<iostream>
using namespace std;
void swap(int  &n1,int &n2){
     n1= n1 + n2;
     n2= n1 - n2;
     n1 = n1 -n2 ;
     
}
int main(){
 int n1,n2;
 n1=2;
 n2=9;
 cout<<"Before Swaping :\n";
 cout<<"N1 = "<<n1<<endl;
 cout<<"N2 = "<<n2<<endl;
 cout<<"After  Swaping :\n";
//  n1= n1 + n2;
//  n2= n1 - n2;
//  n1 = n1 -n2 ;
swap(n1,n2);
cout<<"n1 = "<<n1<<endl;
cout<<"n2 = "<<n2<<endl;
}
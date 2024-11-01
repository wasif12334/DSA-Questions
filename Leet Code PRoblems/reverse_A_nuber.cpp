#include<iostream>
using namespace std;
int main(){
    int number = -121;
     int reverse_num =0 ;
     int remainder;
     while(number>0){
        remainder = number % 10;
        reverse_num  = reverse_num *10 + remainder ;
        number/=10;
     }
     cout<<reverse_num;
   //   if(number = reverse_num ){
   //      cout<<"NUmber is plandrome"<<endl;
   //   }
   //   else
   //      cout<<"Number is not plandrome";
}